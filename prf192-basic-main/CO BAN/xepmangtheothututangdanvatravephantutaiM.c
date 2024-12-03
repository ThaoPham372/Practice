#include <stdio.h>

// Hàm s?p x?p m?ng theo th? t? tang d?n (s? d?ng thu?t toán s?p x?p n?i b?t)
void sap_xep_tang_dan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, m;

    // Nh?p s? lu?ng ph?n t? c?a m?ng
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Nh?p các ph?n t? c?a m?ng
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Nh?p v? trí m
    printf("m = ");
    scanf("%d", &m);

    // S?p x?p m?ng theo th? t? tang d?n
    sap_xep_tang_dan(arr, n);

    // L?y ph?n t? t?i v? trí m sau khi s?p x?p
    int ket_qua = arr[m];

    // In k?t qu?
    printf("After processing: result = %d\n", ket_qua);
    printf("Output for marking:\nOUTPUT:\n%d\n", ket_qua);

    return 0;
}

