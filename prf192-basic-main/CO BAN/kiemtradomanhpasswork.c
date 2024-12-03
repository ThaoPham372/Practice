#include <stdio.h>
#include <ctype.h>
#include <string.h>

void kiemTraMatKhau(const char *matKhau) {
    int L = strlen(matKhau);
    int H = 0, T = 0, S = 0, D = 0;

    for (int i = 0; i < L; i++) {
        if (isupper(matKhau[i])) {
            H++;
        } else if (islower(matKhau[i])) {
            T++;
        } else if (isdigit(matKhau[i])) {
            S++;
        } else {
            D++;
        }
    }

    printf("%d, %d, %d, %d, %d\n", L, H, T, S, D);
}

int main() {
    char matKhau[201];
    printf("Nhap mat khau: ");
    fgets(matKhau, sizeof(matKhau), stdin);
    
    // Xoa ky tu xuong dong neu co
    size_t len = strlen(matKhau);
    if (len > 0 && matKhau[len - 1] == '\n') {
        matKhau[len - 1] = '\0';
    }
    
    kiemTraMatKhau(matKhau);
    return 0;
}


