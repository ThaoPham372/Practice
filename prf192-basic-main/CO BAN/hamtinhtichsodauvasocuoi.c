#include <stdio.h>
#include <stdlib.h>

// H�m d? t�nh t�ch c?a ch? s? d?u ti�n v� ch? s? cu?i c�ng
int tich_chu_so_dau_va_cuoi(int n) {
    // B? d?u �m n?u s? l� s? �m
    n = abs(n);

    // L?y ch? s? cu?i c�ng
    int last_digit = n % 10;

    // T�m ch? s? d?u ti�n
    int first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Tr? v? t�ch c?a ch? s? d?u ti�n v� ch? s? cu?i c�ng
    return first_digit * last_digit;
}

int main() {
    int n;

    // Nh?p s? nguy�n
    printf("Nh?p m?t s? nguy�n: ");
    scanf("%d", &n);

    // G?i h�m t�nh t�ch v� in k?t qu?
    int result = tich_chu_so_dau_va_cuoi(n);
    printf("T�ch c?a ch? s? d?u ti�n v� cu?i c�ng l�: %d\n", result);

    return 0;
}

