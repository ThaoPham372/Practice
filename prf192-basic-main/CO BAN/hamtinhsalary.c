#include <stdio.h>

// Hàm tính ti?n luong cho m?t tháng
float tinh_luong(int so_ngay_lam_viec, float luong_mot_ngay) {
    float luong_thang;
    
    if (so_ngay_lam_viec > 24) {
        // N?u s? ngày làm vi?c l?n hon 24
        luong_thang = 24 * luong_mot_ngay + (so_ngay_lam_viec - 24) * 2 * luong_mot_ngay;
    } else {
        // N?u s? ngày làm vi?c không vu?t quá 24
        luong_thang = so_ngay_lam_viec * luong_mot_ngay;
    }
    
    return luong_thang;
}

int main() {
    int so_ngay_lam_viec;
    float luong_mot_ngay, ket_qua;

    // Nh?p s? ngày làm vi?c và luong hàng ngày
    printf("Enter working days: ");
    scanf("%d", &so_ngay_lam_viec);
    
    printf("Enter daily salary: ");
    scanf("%f", &luong_mot_ngay);

    // G?i hàm d? tính luong tháng
    ket_qua = tinh_luong(so_ngay_lam_viec, luong_mot_ngay);

    // In k?t qu? v?i hai ch? s? sau d?u ph?y
    printf("After processing: the result is %.2f\n", ket_qua);
    printf("Output for marking:\nOUTPUT:\n%.2f\n", ket_qua);

    return 0;
}

