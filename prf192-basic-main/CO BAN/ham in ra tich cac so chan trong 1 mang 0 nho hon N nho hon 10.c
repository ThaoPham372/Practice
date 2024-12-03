#include <stdio.h>

void print_product_of_even_numbers(int arr[], int n) {
    int product = 1;
    int has_even = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  // Ki?m tra n?u s? là s? ch?n
            product *= arr[i];
            has_even = 1;
        }
    }

    if (has_even) {
        printf("OUTPUT:\n%d\n", product);
    } else {
        printf("OUTPUT:\neven numbers do not exist\n");
    }
}

int main() {
    int n;
    printf("Nh?p s? ph?n t? c?a m?ng (0 < n < 10): ");
    scanf("%d", &n);

    // Ki?m tra gi?i h?n n
    if (n <= 0 || n >= 10) {
        printf("S? ph?n t? ph?i n?m trong kho?ng (0 < n < 10).\n");
        return 1;
    }

    int arr[n];
    printf("Nh?p các ph?n t? c?a m?ng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    print_product_of_even_numbers(arr, n);

    return 0;
}

