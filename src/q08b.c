/* ポインタが指す変数の計算 */
#include <stdio.h>

int main () {
    int a = 10;
    int b = 5;
    int c;
    int *pa;        /* aへのポインタpaを宣言 */
    int *pb;        /* bへのポインタpbを宣言 */
    pa = &a;        /* アドレス演算子によりaのアドレスをpaに代入 */
    pb = &b;        /* アドレス演算子によりbのアドレスをpbに代入 */
    c = *pa + *pb;
    printf("a+b=%d\n", c);
    return 0;
}