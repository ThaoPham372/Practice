#include <stdio.h>

int demChuSo(const char *chuoi) {
    int dem = 0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        // Ki?m tra n?u ký t? n?m trong kho?ng '0' d?n '9'
        if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            dem++;
        }
    }
    return dem;
}

int main() {
    char chuoi[201];
    printf("Please enter a string: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    
    // Xóa ký t? xu?ng dòng n?u có
    size_t len = 0;
    while (chuoi[len] != '\0') {
        len++;
    }
    if (len > 0 && chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
    }

    int ketQua = demChuSo(chuoi);
    printf("After processing: result = %d\n", ketQua);
    printf("OUTPUT:\n%d\n", ketQua);

    return 0;
}

