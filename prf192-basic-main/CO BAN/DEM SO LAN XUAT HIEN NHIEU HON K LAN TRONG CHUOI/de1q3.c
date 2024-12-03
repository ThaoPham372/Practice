#include <stdio.h>
#include <string.h>

void demKyTuXuatHien(char *chuoi, int k) {
    int n = strlen(chuoi);
    int dem[256] = {0}; // Mang dem so lan xuat hien cua moi ky tu

    // Dem so lan xuat hien cua moi ky tu
    for (int i = 0; i < n; i++) {
        dem[chuoi[i]]++;
    }

    // In ra cac ky tu xuat hien nhieu hon k lan
    printf("Cac ky tu xuat hien nhieu hon %d lan:\n", k);
    for (int i = 0; i < 256; i++) {
        if (dem[i] > k) {
            printf("%c xuat hien %d lan\n", i, dem[i]);
        }
    }

    // Truong hop dac biet: k = n
    if (k == n) {
        printf("\nCac ky tu xuat hien dung %d lan (trong toan bo chuoi):\n", n);
        for (int i = 0; i < 256; i++) {
            if (dem[i] == n) {
                printf("%c\n", i);
            }
        }
    }
}

int main() {
    char chuoi[100];
    int k;

    printf("Nhap chuoi: ");
    fgets(chuoi, 100, stdin);

    printf("Nhap so lan lap toi thieu: ");
    scanf("%d", &k);

    demKyTuXuatHien(chuoi, k);

    return 0;
}
