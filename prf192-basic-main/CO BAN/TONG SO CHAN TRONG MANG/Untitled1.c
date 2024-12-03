#include <stdio.h>

int tinhTongSoChan(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[100], n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int tongSoChan = tinhTongSoChan(arr, n);
    printf("Tong cac so chan trong mang la: %d\n", tongSoChan);

    return 0;
}

//tinh tong so le
//int tinhTongSoLe(int arr[], int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        if (arr[i] % 2 == 1) {
//            sum += arr[i];
//        }
//    }
//    return sum;
//}
//
//int main() {
//    int arr[100], n;
//
//    printf("Nhap so luong phan tu cua mang: ");
//    scanf("%d", &n);
//
//    printf("Nhap cac phan tu cua mang:\n");
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    int tongSoLe = tinhTongSoLe(arr, n);
//    printf("Tong cac so chan trong mang la: %d\n", tongSoChan);
//
//    return 0;
//}
