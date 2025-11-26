#include <stdio.h>
#include <math.h>

// 刻みを指定
#define TICK 100
// xの範囲を指定
#define X_MIN 1
#define X_MAX 2

int main()
{
    // x, yの初期化
    double x = X_MIN;
    double y;
    // 刻み幅を計算
    const double span = (double)(X_MAX - X_MIN) / TICK;

    // 繰り返し処理
    for (int i = 0; i <= TICK; i++) {
        // yの計算
        y = 3*x - 2*log(3*x); // y = 3x - 2log(3x)
        printf("%.2f %.2f\n", x, y);
        x += span;
    }

    return 0;
}