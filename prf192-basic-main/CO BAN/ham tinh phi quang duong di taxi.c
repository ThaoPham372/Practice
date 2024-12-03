#include <stdio.h>

int tinhPhiTaxi(float quangDuong) {
    int phi;
    if (quangDuong <= 1) {
        phi = 15000; // 15 nghin VND cho 1 km dau tien
    } else {
        phi = 15000 + (int)((quangDuong - 1) * 12000); // 12 nghin VND cho moi km tiep theo
    }
    return phi;
}

int main() {
    float quangDuong;
    printf("Nhap quang duong (km): ");
    scanf("%f", &quangDuong);

    int ketQua = tinhPhiTaxi(quangDuong);
    printf("So tien phi taxi: %d VND\n", ketQua);

    return 0;
}

