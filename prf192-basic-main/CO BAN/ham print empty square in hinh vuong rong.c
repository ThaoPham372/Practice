#include <stdio.h>

void print_empty_square(int R) {
    // In dòng d?u tiên
    for (int i = 1; i <= R; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // In các dòng gi?a (r?ng ? gi?a)
    for (int i = 0; i < R - 2; i++) {
        printf("1");  // In s? 1 ? d?u dòng
        for (int j = 0; j < 2 * (R - 2) + 1; j++) {
            printf(" ");  // In kho?ng tr?ng ? gi?a
        }
        printf("%d\n", R);  // In s? R ? cu?i dòng
    }

    // In dòng cu?i cùng n?u R > 1
    if (R > 1) {
        for (int i = 1; i <= R; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main() {
    int R;
    printf("Nh?p s? dòng (R): ");
    scanf("%d", &R);

    print_empty_square(R);

    return 0;
}

