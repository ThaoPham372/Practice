#include <stdio.h>
#include <stdlib.h>

// Hàm d? tính tích c?a ch? s? d?u tiên và ch? s? cu?i cùng
int tich_chu_so_dau_va_cuoi(int n) {
    // B? d?u âm n?u s? là s? âm
    n = abs(n);

    // L?y ch? s? cu?i cùng
    int last_digit = n % 10;

    // Tìm ch? s? d?u tiên
    int first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Tr? v? tích c?a ch? s? d?u tiên và ch? s? cu?i cùng
    return first_digit * last_digit;
}

int main() {
    int n;

    // Nh?p s? nguyên
    printf("Nh?p m?t s? nguyên: ");
    scanf("%d", &n);

    // G?i hàm tính tích và in k?t qu?
    int result = tich_chu_so_dau_va_cuoi(n);
    printf("Tích c?a ch? s? d?u tiên và cu?i cùng là: %d\n", result);

    return 0;
}

