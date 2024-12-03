#include <stdio.h>
#include <string.h>
#include <ctype.h>

// H�m d?m s? t? trong chu?i
int dem_so_tu(char str[]) {
    int count = 0;
    int length = strlen(str);
    
    // Duy?t qua t?ng k� t? trong chu?i
    for (int i = 0; i < length; i++) {
        // Ki?m tra n?u k� t? hi?n t?i kh�ng ph?i kho?ng tr?ng v� l� b?t d?u c?a m?t t? m?i
        if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1]))) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char full_name[100];

    // Nh?p t�n d?y d?
    printf("Nh?p t�n d?y d?: ");
    fgets(full_name, sizeof(full_name), stdin);
    
    // Lo?i b? k� t? xu?ng d�ng cu?i chu?i n?u c�
    full_name[strcspn(full_name, "\n")] = '\0';

    // G?i h�m d?m s? t? v� in k?t qu?
    int so_tu = dem_so_tu(full_name);
    printf("S? t? trong t�n d?y d?: %d\n", so_tu);

    return 0;
}


