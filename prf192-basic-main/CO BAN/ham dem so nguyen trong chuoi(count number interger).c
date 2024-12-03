#include <stdio.h>

int demSoNguyenTrongChuoi(const char *chuoi) {
    int dem = 0;
    int i = 0;
    int trongSo = 0;
    
    while (chuoi[i] != '\0') {
        if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            if (!trongSo) {
                dem++;
                trongSo = 1;
            }
        } else {
            trongSo = 0;
        }
        i++;
    }
    return dem;
}

int main() {
   char chuoi[201];
                printf("Nhap chuoi: ");
                getchar(); // Loai bo ky tu \n con lai
                fgets(chuoi, sizeof(chuoi), stdin);
                printf("So luong so nguyen trong chuoi: %d\n", demSoNguyenTrongChuoi(chuoi));
   
    return 0;
}// ví d?: Ex:  “I go to work 9 days per 2 weeks” -> return 2
