#include <stdio.h>
#include <stdbool.h>

bool laSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void taoMangSoNguyenTo(int n) {
    printf("Cac so nguyen to nho hon %d la: ", n);
    for (int i = 2; i < n; i++) {
        if (laSoNguyenTo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
   int n;
                printf("Nhap n: ");
                scanf("%d", &n);
                taoMangSoNguyenTo(n);
   
    return 0;
}// ví d?: Ex:   if the input is 12 then the function returns {2,3,5,7,11}
