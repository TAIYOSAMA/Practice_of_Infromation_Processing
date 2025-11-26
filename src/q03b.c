// 3^5の値を次の２つの方法で求めて、結果が等しいことを確認する。
// ① for文を使って3を5回掛け合わせる方法
// ② ライブラリ関数pow()を用いる方法

#include <stdio.h>
#include <math.h>

int main () {
    // for文を使う
    int ans1 = 1;
    for (int i = 0; i < 5; i++)
        ans1 *= 3;
    printf("%d\n", ans1);

    // ライブラリ関数を使う
    int ans2 = pow(3, 5);
    printf("%d\n", ans2);
}