#include <stdio.h>

void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nh?p ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void inUocSoGiamDan(int arr[], int n, int m) {
    printf("Các s? là u?c s? c?a %d theo th? t? gi?m d?n:\n", m);
    for (int i = n - 1; i >= 0; i--) {
        if (m % arr[i] == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int n, m;

    // Nh?p s? ph?n t? c?a m?ng
    printf("Nh?p s? ph?n t? c?a m?ng (N): ");
    scanf("%d", &n);

    int arr[n];

    // Nh?p các ph?n t? c?a m?ng
    nhapMang(arr, n);

    // Nh?p s? nguyên duong M
    printf("Nh?p s? nguyên duong M: ");
    scanf("%d", &m);

    // In các s? là u?c s? c?a M theo th? t? gi?m d?n
    inUocSoGiamDan(arr, n, m);

    return 0;
}

