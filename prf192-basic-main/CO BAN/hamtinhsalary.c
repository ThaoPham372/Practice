#include <stdio.h>

// H�m t�nh ti?n luong cho m?t th�ng
float tinh_luong(int so_ngay_lam_viec, float luong_mot_ngay) {
    float luong_thang;
    
    if (so_ngay_lam_viec > 24) {
        // N?u s? ng�y l�m vi?c l?n hon 24
        luong_thang = 24 * luong_mot_ngay + (so_ngay_lam_viec - 24) * 2 * luong_mot_ngay;
    } else {
        // N?u s? ng�y l�m vi?c kh�ng vu?t qu� 24
        luong_thang = so_ngay_lam_viec * luong_mot_ngay;
    }
    
    return luong_thang;
}

int main() {
    int so_ngay_lam_viec;
    float luong_mot_ngay, ket_qua;

    // Nh?p s? ng�y l�m vi?c v� luong h�ng ng�y
    printf("Enter working days: ");
    scanf("%d", &so_ngay_lam_viec);
    
    printf("Enter daily salary: ");
    scanf("%f", &luong_mot_ngay);

    // G?i h�m d? t�nh luong th�ng
    ket_qua = tinh_luong(so_ngay_lam_viec, luong_mot_ngay);

    // In k?t qu? v?i hai ch? s? sau d?u ph?y
    printf("After processing: the result is %.2f\n", ket_qua);
    printf("Output for marking:\nOUTPUT:\n%.2f\n", ket_qua);

    return 0;
}

