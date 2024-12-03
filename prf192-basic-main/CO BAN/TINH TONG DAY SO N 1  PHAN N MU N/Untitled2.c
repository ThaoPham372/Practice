#include <stdio.h>
#include <math.h>

double tinhTongDaySo(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / pow(i, i);
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    double tong = tinhTongDaySo(n);
    printf("Tong cua day so la: %.5lf\n", tong);

    return 0;
}
