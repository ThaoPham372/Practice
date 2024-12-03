#include <stdio.h>

// Ham chuyen doi tu do F sang do C
float convertFtoC(float F) {
    return (F - 32) * 5 / 9;
}

int main() {
    float F, C;
    
    // Nhap gia tri do F tu nguoi dung
    printf("Nhap nhiet do (F): ");
    scanf("%f", &F);
    
    // Goi ham chuyen doi
    C = convertFtoC(F);
    
    // Hien thi ket qua voi 2 chu so thap phan
    printf("OUTPUT:\n%.2f\n", C);
    
    return 0;
}

