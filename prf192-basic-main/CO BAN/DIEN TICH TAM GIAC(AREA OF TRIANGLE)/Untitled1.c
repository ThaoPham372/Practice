#include <stdio.h>
#include <math.h>

// Hàm tính di?n tích tam giác
float tinhDienTichTamGiac(float a, float b, float c) {
    float p = (a + b + c) / 2; // Tính n?a chu vi
    float S = sqrt(p * (p - a) * (p - b) * (p - c)); // Tính di?n tích
    return S;
}

int main() {
    float a, b, c, dienTich;

    printf("Nhap do dai ba canh tam giac: ");
    scanf("%f %f %f", &a, &b, &c);

    // Ki?m tra xem ba c?nh có t?o thành m?t tam giác h?p l? không
    if (a + b > c && a + c > b && b + c > a) {
        dienTich = tinhDienTichTamGiac(a, b, c);
        printf("Dien tich tam giac la: %.2f\n", dienTich);
    } else {
        printf("Ba canh nhap vao khong tao thanh mot tam giac.\n");
    }

    return 0;
}
