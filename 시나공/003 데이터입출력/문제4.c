#include <stdio.h>

int main() {
    int i, j;
    scanf("%o#%x", &i, &j);  // 입력 15#22
    printf("%d %d", i, j);  // 결과 13 34
}

// %o : 8진수  ==>  8진수 15를 10진수로  ==>  8+5=13
// %x : 16진수  ==>  16진수 22를 10진수로  ==>  32+2=34