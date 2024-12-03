#include <stdio.h>

// H�m t�nh t?ng S(n)
float tinh_tong(int n) {
    float sum = 0.0;
    
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (2 * i);
    }
    
    return sum;
}

int main() {
    int n;
    float ket_qua;

    // Nh?p gi� tr? n
    printf("Enter n: ");
    scanf("%d", &n);

    // G?i h�m t�nh t?ng v� luu k?t qu?
    ket_qua = tinh_tong(n);

    // In k?t qu? v?i hai ch? s? sau d?u ph?y
    printf("After processing: S(n) = %.2f\n", ket_qua);
    printf("Output for marking:\nOUTPUT:\n%.2f\n", ket_qua);

    return 0;
}

