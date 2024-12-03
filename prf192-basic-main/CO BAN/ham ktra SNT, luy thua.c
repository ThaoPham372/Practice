#include <stdio.h>
int laSoNguyenTo(int num) {
    if (num < 2) {
        return 0; // Không ph?i s? nguyên t?
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Không ph?i s? nguyên t?
        }
    }
    return 1; // Là s? nguyên t?
}
int tinhLuyThua(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
void inMangTheoYeuCau(int arr[], int n, int m) {
    printf("OUTPUT:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] > 1 && laSoNguyenTo(arr[i])) {
            // N?u là s? nguyên t?, in luy th?a M c?a s? dó
            printf("%d ", tinhLuyThua(arr[i], m));
        } else {
            // N?u không ph?i s? nguyên t?, in s? dó
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
    printf("Nh?p các ph?n t? c?a m?ng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Nh?p s? nguyên M
    printf("Nh?p s? nguyên M: ");
    scanf("%d", &m);

    // G?i hàm d? in m?ng theo yêu c?u
    inMangTheoYeuCau(arr, n, m);

    return 0;
}//Your program allows the user to enter an array of N integers, where N is entered by the user (from standard input).
//
//Next, ask the user to enter an integer M.
//
//Find and print all the elements of the array. For prime elements, print its power of M (prime numbers are numbers that have exactly two factors, 1 and itself).
//
//Below is an example:
//
//Input:
//Enter N = 7; array = {2, -8, 8, 0, 7, 9, 20}; M = 3
//
//Output:
//8 -8 0 343 9 20

