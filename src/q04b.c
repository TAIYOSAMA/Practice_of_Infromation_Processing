#include <stdio.h>

int main () {
    int start=0, end=0;
    int isPrime; //素数判定用フラグ

    while (start >= end) {
        printf("start="); scanf("%d", &start);
        printf("end=");   scanf("%d", &end);
        if (start >= end)
            printf("startの値はendの値よりも小さくしてください。\n");
    }

    for (int i = end; i >= start; i--) {
        // 素数かどうかを判定
        isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        // 素数だったら表示
        if (isPrime) printf("%d\n", i);
    }

    return 0;
}