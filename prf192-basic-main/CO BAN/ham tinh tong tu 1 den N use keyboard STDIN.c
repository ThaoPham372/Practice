#include <stdio.h>

// Ham tinh tong tu 1 den N
int sumFrom1ToN(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int N;

    // Nhap gia tri N tu nguoi dung
    printf("Nhap mot so nguyen duong N: ");
    scanf("%d", &N);

    if (N > 0) {
        // Goi ham de tinh tong
        int sum = sumFrom1ToN(N);
        printf("OUTPUT:\n%d\n", sum);
    } else {
        // Hien thi thong bao loi neu N khong phai la so nguyen duong
        printf("OUTPUT:\n%d is not a positive integer\n", N);
    }

    return 0;
}

