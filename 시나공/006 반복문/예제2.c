#include <stdio.h>
int main() {
    int a=0, hap=0;
    while(1) // 무한반복
    {
        a++;
        if(a>5)
            break; // 반복문 탈출. 바깥인 printf문으로
        if(a%2==0)
            continue; // 반복문 유지. 반복문의 처음인 a++로
        hap += a;
    }
    printf("%d, %d\n", a, hap);
}

// a=1 a%2==1 hap=1
// a=2 a%2==0
// a=3 a%2==1 hap=1+3=4
// a=4 a%2==0
// a=5 a%2==1 hap=4+5=9
// a=6

// 결과 6, 9