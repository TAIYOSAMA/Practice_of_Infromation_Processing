#include <stdio.h>

#define N 3  //Nを変更することで行列のサイズを変更できます。

int main () {
    int A[N][N], B[N][N];
    int AB[N][N] = {0};

    // 行列を入力
    printf("A=\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &A[i][j]);
    
    printf("B=\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &B[i][j]);

    // 行列の積を計算、出力
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            for (int k = 0; k < N; k++)
                AB[i][j] += A[k][j] * A[i][k];
    }
    printf("A*B=\n"); // 出力
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%3d  ", AB[i][j]);
        putchar('\n');
    }

    return 0;
}