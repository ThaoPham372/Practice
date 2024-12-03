#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Ham tinh the tich cua khoi lap phuong voi canh a
double volumeOfCube(double a) {
    return a * a * a;
}

// Ham tinh tong cac phan tu le trong mang
int sumOfOddElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

// Ham kiem tra so nguyen to
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Ham liet ke tat ca cac phan tu la so nguyen to trong mang
void listPrimeElements(int arr[], int size) {
    printf("Cac phan tu la so nguyen to trong mang: ");
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// Ham sap xep mang theo thu tu tang dan
void sortArrayAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Ham chinh voi menu de chon chuc nang
int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Tinh the tich cua khoi lap phuong\n");
        printf("2. Tinh tong cac phan tu le trong mang\n");
        printf("3. Liet ke cac phan tu la so nguyen to trong mang\n");
        printf("4. Sap xep mang theo thu tu tang dan\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                double a;
                printf("Nhap canh cua khoi lap phuong: ");
                scanf("%lf", &a);
                printf("The tich cua khoi lap phuong la: %.2f\n", volumeOfCube(a));
                break;
            }
            case 2: {
                int size;
                printf("Nhap kich thuoc cua mang: ");
                scanf("%d", &size);
                int arr[size];
                printf("Nhap cac phan tu cua mang: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                printf("Tong cac phan tu le trong mang la: %d\n", sumOfOddElements(arr, size));
                break;
            }
            case 3: {
                int size;
                printf("Nhap kich thuoc cua mang: ");
                scanf("%d", &size);
                int arr[size];
                printf("Nhap cac phan tu cua mang: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                listPrimeElements(arr, size);
                break;
            }
            case 4: {
                int size;
                printf("\nNhap kich thuoc cua mang: ");
                scanf("%d", &size);
                int arr[size];
                printf("\nNhap cac phan tu cua mang: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                sortArrayAscending(arr, size);
                printf("\nMang sau khi sap xep tang dan: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 5);

    return 0;
}

//ะส:1.Write a function to calculate the volume of a cube squere length by a. (2 marks)
//2.Write a function to calculate sum of odd elements in array. (2 marks)
//3.Write a function to list all primed elements in array. (1.5 marks)
//4.Sort the list by ascending elements in array, print out the result (1.5 marks)
//5.Write main() function to invoke the 4 functions above:
//+ Offertext menu for user choice to execute the functions.(1 mark)
//+ For each choice, demostration of successfully running the selected function  (0.5 mark for each)

