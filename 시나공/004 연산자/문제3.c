#include <stdio.h>
int main() {
    int i=5, j=4, k=1, L, m;
    L = i > 5 || j != 0;
    m = j <= 4 && k < 1;
    printf("%d, %d\n", L, m);


    // L = (5>5) || (4!=0) = 0(거짓) || 1(참) = 1
    // m = (4<=4) && (1<1) = 1(참) && 0(거짓) = 0

    // 결과
    // 1, 0
}