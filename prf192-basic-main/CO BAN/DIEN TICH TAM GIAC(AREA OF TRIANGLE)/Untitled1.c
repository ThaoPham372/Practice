#include <stdio.h>
#include <math.h>

// H�m t�nh di?n t�ch tam gi�c
float tinhDienTichTamGiac(float a, float b, float c) {
    float p = (a + b + c) / 2; // T�nh n?a chu vi
    float S = sqrt(p * (p - a) * (p - b) * (p - c)); // T�nh di?n t�ch
    return S;
}

int main() {
    float a, b, c, dienTich;

    printf("Nhap do dai ba canh tam giac: ");
    scanf("%f %f %f", &a, &b, &c);

    // Ki?m tra xem ba c?nh c� t?o th�nh m?t tam gi�c h?p l? kh�ng
    if (a + b > c && a + c > b && b + c > a) {
        dienTich = tinhDienTichTamGiac(a, b, c);
        printf("Dien tich tam giac la: %.2f\n", dienTich);
    } else {
        printf("Ba canh nhap vao khong tao thanh mot tam giac.\n");
    }

    return 0;
}
