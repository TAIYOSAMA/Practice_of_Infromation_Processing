#include <stdio.h>

#define N 100

// 配列に要素を入力するための関数
void inputArray (int X[], int n, char *label) {
    printf("%s", label);
    for (int i = 0; i < n; i++) {
        scanf("%d", &X[i]);
        if (X[i] == 0 || X[i] <= -2) i--; 
        if (X[i] == -1) break;
    }
    return;
}

// -1の一つ前までの要素を出力（nは最大要素数を表す）
void printArray (int X[], int n) {
    printf("{");
    int i;
    for (i = 0; i < n - 1; i++) {
        if (X[i + 1] == -1) break;
        printf("%d,", X[i]);
    }
    printf("%d}\n", X[i]);
    return;
}

// 重複した数値を削除（ソートされている配列のみ）
void deleteSameNumFromSortedArray (int X[], int n) {
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (X[j] != X[i]) {
            X[++j] = X[i];
        }
        if (X[i] == -1) {
            X[j] = -1;
            j++;
            while (X[j] != 0 && j < N) {
                X[j++] = 0;
            }
            break;
        }
    }

    return;
}

// 昇順にソート
void sort (int X[], int n) {
    int temp;
    for (int i = n - 1; i > 1; i--) {
        for (int j = 0; j < i; j++) {
            if (X[j] > X[j + 1] && X[j] > 0 && X[j + 1] > 0) {
                temp = X[j];
                X[j] = X[j + 1];
                X[j + 1] = temp;
            }
        }
    }
    return;
}

// 配列を表示用に整形
void formatArray(int X[], int n) {
    sort(X, n);
    deleteSameNumFromSortedArray(X, n);
    return;
}

// 共通部分集合を計算
void calcCommon (int X[], int n, int A[], int nA, int B[], int nB) {
    int k = 0;
    for (int i = 0; i < nA; i++) {
        if (A[i] == -1) break;
        for (int j = 0; j < nB; j++) {
            if (B[j] == -1) break;
            if (A[i] == B[j]) {
                X[k++] = A[i];
            }
        }
    }

    X[k] = -1;

    formatArray(X, n);

    return;
}

// 和集合を計算
void calcUnion (int X[], int n, int A[], int nA, int B[], int nB) {
    int k = 0;
    for (int i = 0; i < nA; i++) {
        if (A[i] == -1) break;
        X[k++] = A[i];
    }
    for (int i = 0; i < nA; i++) {
        if (B[i] == -1) break;
        X[k++] = B[i];
    }

    X[k] = -1;

    formatArray(X, n);

    return;
}

int main () {
    // 集合の初期化
    int A[N] = {0};
    int B[N] = {0};

    int AandB[N] = {0};
    int AorB[N * 2] = {0};

    // 集合の要素を入力
    inputArray(A, N, "SetA: ");
    inputArray(B, N, "SetB: ");

    // 共通部分集合を出力
    calcCommon(AandB, N, A, N, B, N);
    printf("Common subset: ");
    printArray(AandB, N);

    // 和集合を出力
    calcUnion(AorB, N * 2, A, N, B, N);
    printf("Union set: ");
    printArray(AorB, N * 2);

    return 0;
}