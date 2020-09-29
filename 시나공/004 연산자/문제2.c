#include <stdio.h>
int main() {
    int hap, j , k, L;
    j=k=L=0;
    hap = ++j + k++ + ++L;
    printf("%d, %d, %d, %d\n", hap, j, k, L);


    // hap = 1+0+1 = 2
    // j=k=L=1

    // 결과
    // 2, 1, 1, 1
}