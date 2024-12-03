#include <stdio.h>

int tinhTongChuSo(int n) {
    int tong = 0;
    n = (n < 0) ? -n : n; // Loai bo dau tru neu co
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

                
int main() {
    int n;
    printf("Nhap mot day so nguyen: ");
    scanf("%d", &n);
    printf("Tong cac chu so: %d\n", tinhTongChuSo(n));
   
    return 0;
}
