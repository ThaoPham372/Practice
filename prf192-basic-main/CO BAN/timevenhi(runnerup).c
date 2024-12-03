#include <stdio.h>

// Hàm tìm th?i gian v? nhì
int tim_thoi_gian_ve_nhi(int times[], int n) {
    int max_time = times[0];
    int runner_up_time = -1;

    // Tìm th?i gian l?n nh?t (Champion)
    for (int i = 1; i < n; i++) {
        if (times[i] > max_time) {
            max_time = times[i];
        }
    }

    // Tìm th?i gian l?n th? hai (Runner-up)
    for (int i = 0; i < n; i++) {
        if (times[i] < max_time && (runner_up_time == -1 || times[i] > runner_up_time)) {
            runner_up_time = times[i];
        }
    }

    return runner_up_time;
}

int main() {
    int n;

    // Nh?p s? lu?ng thí sinh
    printf("Nh?p s? lu?ng thí sinh: ");
    scanf("%d", &n);

    int times[n];
    
    // Nh?p th?i gian c?a t?ng thí sinh
    printf("Nh?p th?i gian c?a các thí sinh (cách nhau b?ng kho?ng tr?ng): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }

    // G?i hàm tim_thoi_gian_ve_nhi d? tìm th?i gian c?a ngu?i v? nhì
    int runner_up_time = tim_thoi_gian_ve_nhi(times, n);

    // In ra th?i gian c?a ngu?i v? nhì
    printf("Th?i gian c?a ngu?i v? nhì: %d\n", runner_up_time);

    return 0;
}


