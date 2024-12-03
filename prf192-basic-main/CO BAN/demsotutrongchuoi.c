#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm d?m s? t? trong chu?i
int dem_so_tu(char str[]) {
    int count = 0;
    int length = strlen(str);
    
    // Duy?t qua t?ng ký t? trong chu?i
    for (int i = 0; i < length; i++) {
        // Ki?m tra n?u ký t? hi?n t?i không ph?i kho?ng tr?ng và là b?t d?u c?a m?t t? m?i
        if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1]))) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char full_name[100];

    // Nh?p tên d?y d?
    printf("Nh?p tên d?y d?: ");
    fgets(full_name, sizeof(full_name), stdin);
    
    // Lo?i b? ký t? xu?ng dòng cu?i chu?i n?u có
    full_name[strcspn(full_name, "\n")] = '\0';

    // G?i hàm d?m s? t? và in k?t qu?
    int so_tu = dem_so_tu(full_name);
    printf("S? t? trong tên d?y d?: %d\n", so_tu);

    return 0;
}


