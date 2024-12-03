#include <stdio.h>

// H�m nh?p m?ng
void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nh?p ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// H�m s?p x?p m?ng theo th? t? gi?m d?n
void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// H�m in c�c s? l� u?c s? c?a M theo th? t? gi?m d?n
void inUocSoGiamDan(int arr[], int n, int m) {
    printf("C�c s? l� u?c s? c?a %d theo th? t? gi?m d?n:\n", m);
    for (int i = 0; i < n; i++) {
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

    // Nh?p c�c ph?n t? c?a m?ng
    nhapMang(arr, n);

    // Nh?p s? nguy�n duong M
    printf("Nh?p s? nguy�n duong M: ");
    scanf("%d", &m);

    // S?p x?p m?ng theo th? t? gi?m d?n
    sapXepGiamDan(arr, n);

    // In c�c s? l� u?c s? c?a M theo th? t? gi?m d?n
    inUocSoGiamDan(arr, n, m);

    return 0;
}

////Your program allows the user to input an array of N integers, where N is entered by the user (from standard input).
//
//Next, ask the user to enter a positive integer M.
//
//Print the numbers in the array that are divisors of M in descending order.
