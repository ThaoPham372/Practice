#include <stdio.h>
#include <stdbool.h>

void inCacPhanTuRiengBiet(int arr[], int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        bool laTrungLap = false;
        // Ki?m tra xem ph?n t? hi?n t?i dã xu?t hi?n trong d?u ra chua
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                laTrungLap = true;
                break;
            }
        }
        if (!laTrungLap) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 3, 2, 6, 1, 7, 1};
    int kichThuoc = sizeof(arr) / sizeof(arr[0]);
    printf("Cac phan tu rieng biet: ");
    inCacPhanTuRiengBiet(arr, kichThuoc);
    return 0;
}


