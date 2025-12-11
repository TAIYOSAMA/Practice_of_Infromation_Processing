#include <stdio.h>
#include <stdlib.h>

int factorial (int n) {
    if (n == 1) return 1;
    return factorial(n - 1) * n;
}

int choose (int n, int r) {
    if (n < r) exit(1);
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main () {
    int n, r;

    printf("n=");
    scanf("%d", &n);
    printf("r=");
    scanf("%d", &r);

    printf("ans=%d\n", choose(n, r));

    return 0;
}