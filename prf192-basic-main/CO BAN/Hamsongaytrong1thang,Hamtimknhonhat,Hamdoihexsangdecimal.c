#include <stdio.h>
#include <string.h>
#include <ctype.h>

// H�m tra ve so ng�y trong mot th�ng
int daysInMonth(int month, int year) {
    if (month == 2) {
        // Ki?m tra nam nhu?n
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return 29;
        else
            return 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

// H�m t�m k nho nhat sao cho 4^k > n
int smallestK(int n) {
    int k = 0;
    int power = 1; // 4^0 = 1
    while (power <= n) {
        k++;
        power *= 4;
    }
    return k;
}

// H�m ki?m tra m?t s? c� ph?i l� s? ho�n h?o kh�ng
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

// H�m tr? v? tong c�c so ho�n hao trong mot mang
int sumOfPerfectNumbers(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (isPerfect(arr[i]))
            sum += arr[i];
    }
    return sum;
}

// H�m chuyen chuoi so he thap luc ph�n sang so thap ph�n
int convertHexStringToDecimal(char hex[]) {
    int len = strlen(hex);
    int base = 1; // 16^0
    int decimal = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base;
        }
        else {
            return -1; // K� t? kh�ng h?p l?
        }
        base *= 16;
    }
    return decimal;
}

// H�m ch�nh v?i menu s? d?ng switch-case
int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. T�nh s? ng�y trong m?t th�ng\n");
        printf("2. T�m k nh? nh?t sao cho 4^k > n\n");
        printf("3. T?ng c�c s? ho�n h?o trong m?ng\n");
        printf("4. Chuy?n chu?i th?p l?c ph�n sang th?p ph�n\n");
        printf("5. Tho�t\n");
        printf("Nh?p l?a ch?n c?a b?n: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
               int month, year;

                 // Nh?p th�ng v� nam t? ngu?i d�ng
               printf("Nh?p th�ng: ");
               scanf("%d", &month);
               printf("Nh?p nam: ");
               scanf("%d", &year);

                // Ki?m tra t�nh h?p l? c?a th�ng
               if (month < 1 || month > 12) {
               printf("Th�ng kh�ng h?p l?. Vui l�ng nh?p gi� tr? t? 1 d?n 12.\n");
             } else {
                 // G?i h�m v� in k?t qu?
               int days = daysInMonth(month, year);
               printf("S? ng�y trong th�ng %d nam %d l�: %d\n", month, year, days);
            }
                break;
            }
            case 2: {
                int n;
                printf("Nh?p n: ");
                scanf("%d", &n);
                printf("k nh? nh?t sao cho 4^k > %d l�: %d\n", n, smallestK(n));
                break;
            }
            case 3: {
                int size;
                printf("Nh?p k�ch thu?c m?ng: ");
                scanf("%d", &size);
                int arr[size];
                printf("Nh?p c�c ph?n t? c?a m?ng: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                printf("T?ng c�c s? ho�n h?o: %d\n", sumOfPerfectNumbers(arr, size));
                break;
            }
            case 4: {
                char hex[20];
                printf("Nh?p chu?i th?p l?c ph�n: ");
                scanf("%s", hex);
                int decimal = convertHexStringToDecimal(hex);
                if (decimal != -1)
                    printf("Gi� tr? th?p ph�n: %d\n", decimal);
                else
                    printf("Chu?i th?p l?c ph�n kh�ng h?p l?\n");
                break;
            }
            case 5:
                printf("Tho�t chuong tr�nh.\n");
                break;
            default:
                printf("L?a ch?n kh�ng h?p l?. Vui l�ng th? l?i.\n");
        }
    } while (choice != 5);

    return 0;
}//��: 1.	Write a function that returns the number of days in a month. (2 marks)
//Example:	month = 2, year = 2020 ? number of days in 2/2020: 29
//		month = 2, year = 2022 ? number of days in 2/2022: 28
//		month = 5, year = 2023 ? number of days in 5/2023: 31
//month = 9, year = 2023 ? number of days in 9/2023: 30

//2.	Write a function that returns the smallest k such that 4^k > n. (2 marks) 
//Example:	n = 65 ? k = 4

//3.	Write a function that returns the sum of perfect numbers in an array of integers. (2 marks)
//A perfect number is a number whose sum of its divisors (except itself) is equal to itself
//Example:
//The number 28 has divisors 1, 2, 4, 7, and 14. The sum of these divisors is:
//1 + 2 + 4 + 7 + 14 = 28
//Therefore, 28 is a perfect number
//

//4.	Convert Hexadecimal Number String to Decimal Number. (2 marks)
//Write a function named convertHecStringToDecimal that takes a char array input representing an hexadecimal number. The function should convert the hexadecimal number string to decimal number. If the input is not a valid hexadecimal number, the function should return -1.
//Example:
//int decimal1 = convertHecStringToDecimal ("FE");  // decimal1 = 15*16^1+14*16^0= 254
//int decimal2 = convertHecStringToDecimal ("F2EG"); // decimal2 should be -1, because of G

