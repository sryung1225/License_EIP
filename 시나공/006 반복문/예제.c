#include <stdio.h>
int main() {
    int a=0, hap=0;
    while (a<5)
    {
        a++;
        hap += a;
    }
    printf("%d, %d\n", a, hap);
}

// a=0 : a=1 hap=1
// a=1 : a=2 hap=1+2=3
// a=2 : a=3 hap=3+3=6
// a=3 : a=4 hap=6+4=10
// a=4 : a=5 hap=10+5=15
// 결과 5, 15