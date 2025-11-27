#include <stdio.h>

int main () {
    int num = 0;
    int sum = 0;

    while (num >= 0) {
        scanf("%d", &num);
        if (num % 2 == 0 || num < 0) continue;
        sum += num;
    }

    printf("souwa=%d\n", sum);

    return 0;
}