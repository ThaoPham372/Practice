#include <stdio.h>
#include <string.h>

// Bài 1: Tìm s? Fibonacci d?u tiên l?n hon n
int fibonacci(int n) {
    int f0 = 0, f1 = 1, fn = 1;
    while (fn <= n) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}

// Bài 2: Tính t?ng các ph?n t? trên du?ng chéo ph? c?a ma tr?n
int tongCheoPhu(int a[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][n - i - 1];
    }
    return sum;
}

// Bài 3: Chu?n hóa xâu
void chuanHoaXau(char s[]) {
    // Vi?t hoa ch? cái d?u tiên c?a m?i câu
    for (int i = 0; s[i]; i++) {
        if (i == 0 || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?') {
            s[i] = toupper(s[i]);
        }
    }
}

// Bài 4: C?u trúc sinh viên và phân lo?i h?c l?c
typedef struct {
    char ten[50];
    float diem;
    char hocLuc[20];
} SinhVien;

void phanLoaiHocLuc(SinhVien sv[]) {
    for (int n, i = 0; i < n; i++) {
        if (sv[i].diem >= 8.5) {
            strcpy(sv[i].hocLuc, "Gioi");
        } else if (sv[i].diem >= 6) {
            strcpy(sv[i].hocLuc, "Kha");
        } else if (sv[i].diem >= 4) {
            strcpy(sv[i].hocLuc, "Trung binh");
        } else {
            strcpy(sv[i].hocLuc, "Yeu");
        }
    }
}

// Bài 5: S?p x?p danh sách sinh viên theo th? t? gi?m d?n di?m
void sapXepGiamDan(SinhVien sv[], int n) {
    // S? d?ng thu?t toán s?p x?p b?t
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diem < sv[j].diem) {
                SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

int main() {
    int choice;
    SinhVien sv[100]; // Gi? s? t?i da 100 sinh viên
    int n;

    do {
        printf("\nMenu:\n");
        printf("1. Tim so Fibonacci dau tien lon hon n\n");
        printf("2. Tinh tong cac phan tu tren duong cheo phu cua ma tran\n");
        printf("3. Chuan hoa xau\n");
        printf("4. Quan ly sinh vien\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int n;
                printf("Nhap n: ");
                scanf("%d", &n);
                printf("So Fibonacci dau tien lon hon %d la: %d\n", n, fibonacci(n));
                break;
            }
            case 2: {
                int n, a[100][100];
                printf("Nhap cap cua ma tran: ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cua ma tran:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        scanf("%d", &a[i][j]);
                    }
                }
                printf("Tong cac phan tu tren duong cheo phu la: %d\n", tongCheoPhu(a, n));
                break;
            }
            case 3: {
                char s[100];
                getchar();
                printf("Nhap xau: ");
                fgets(s, 100, stdin);
                chuanHoaXau(s);
                printf("Xau sau khi chuan hoa: %s\n", s);
                break;
            }
            case 4: {
                printf("Nhap so luong sinh vien: ");
                scanf("%d", &n);
                printf("Nhap thong tin sinh vien:\n");
                for (int i = 0; i < n; i++) {
                    printf("Sinh vien thu %d:\n", i + 1);
                    printf("Ho ten: ");
                    scanf("%s", sv[i].ten);
                    printf("Diem: ");
                    scanf("%f", &sv[i].diem);
                }
                phanLoaiHocLuc(sv);
                printf("\nDanh sach sinh vien co hoc luc Trung binh:\n");
                for (int i = 0; i < n; i++) {
                    if (strcmp(sv[i].hocLuc, "Trung binh") == 0) {
                        printf("%s - Diem: %.2f - Hoc luc: %s\n", sv[i].ten, sv[i].diem, sv[i].hocLuc);
                    }
                }
                break;
            }
            case 0:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Xin vui long chon lai!\n");
        }
    } while (choice != 0);

    return 0;
}
