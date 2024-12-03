#include <stdio.h>
#include <math.h>

// Hàm ki?m tra s? nguyên t?
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Hàm tính t?ng các s? nguyên t? trong m?ng
int sumOfPrimes(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {2, 3, 4, 5, 7, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = sumOfPrimes(arr, n);
    printf("Tong cac so nguyen to trong mang la: %d\n", result);

    return 0;
}
