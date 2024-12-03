#include <stdio.h>

void print_empty_square(int R) {
    // In d�ng d?u ti�n
    for (int i = 1; i <= R; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // In c�c d�ng gi?a (r?ng ? gi?a)
    for (int i = 0; i < R - 2; i++) {
        printf("1");  // In s? 1 ? d?u d�ng
        for (int j = 0; j < 2 * (R - 2) + 1; j++) {
            printf(" ");  // In kho?ng tr?ng ? gi?a
        }
        printf("%d\n", R);  // In s? R ? cu?i d�ng
    }

    // In d�ng cu?i c�ng n?u R > 1
    if (R > 1) {
        for (int i = 1; i <= R; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int R;
    printf("Nh?p s? d�ng (R): ");
    scanf("%d", &R);

    print_empty_square(R);

    return 0;
}

