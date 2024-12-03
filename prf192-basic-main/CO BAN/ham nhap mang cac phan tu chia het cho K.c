#include <stdio.h>

// Ham nhap mang
void inputArray(int arr[], int size) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Ham tim va in cac phan tu chia het cho K
void printDivisibleByK(int arr[], int size, int K) {
    int found = 0; // Bien kiem tra xem co phan tu nao chia het cho K hay khong
    printf("OUTPUT:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] % K == 0) {
            printf("%d\n", arr[i]);
            found = 1;
        }
    }
    // Neu khong co phan tu nao chia het cho K
    if (!found) {
        printf("Not found in N elements of array\n");
    }
}

int main() {
    int N, K;

    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang N: ");
    scanf("%d", &N);

    int arr[N];

    // Goi ham nhap mang
    inputArray(arr, N);

    // Nhap gia tri K
    printf("Nhap gia tri K: ");
    scanf("%d", &K);

    // Goi ham in cac phan tu chia het cho K
    printDivisibleByK(arr, N, K);

    return 0;
}

