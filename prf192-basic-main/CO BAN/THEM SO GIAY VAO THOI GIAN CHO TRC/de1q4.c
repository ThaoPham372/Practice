#include <stdio.h>

struct Time {
    int hour;
    int minute;
    int second;
};

void tinhToiDiemMoi(struct Time *time, int n) {
   time->second += n;

    // Ði?u ch?nh s? giây
    while (time->second >= 60) {
        time->second -= 60;
        time->minute++;
    }

    // Ði?u ch?nh s? phút
    while (time->minute >= 60) {
        time->minute -= 60;
        time->hour++;
    }

    // Ði?u ch?nh s? gi?
    time->hour %= 24;
}

void inThoiGian(struct Time time) {
    printf("%d:%02d:%02d\n", time.hour, time.minute, time.second);
}

int main() {
    struct Time thoiGian;
    thoiGian.hour = 10;
    thoiGian.minute = 30;
    thoiGian.second = 45;

    int n; // Thêm 12345 giây
    printf("Nhap so giay can them vao: ");
    scanf("%d",&n);

    printf("Thoi gian ban dau: ");
    inThoiGian(thoiGian);

    tinhToiDiemMoi(&thoiGian, n);

    printf("Thoi gian moi: ");
    inThoiGian(thoiGian);

    return 0;
}
