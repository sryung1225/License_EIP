#include <stdio.h>
int main() {
    int i = 10, j = 10, k = 30;
    i /= j;
    j -= i;
    k %= j;
    printf("%d, %d, %d\n", i, j, k);


    // i = i/j = 10/10 = 1
    // j = j-i = 10-1 = 9
    // k = k%j = 30%9 = 3
    // 결과 1, 9, 3
}