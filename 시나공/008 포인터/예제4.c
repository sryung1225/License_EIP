#include <stdio.h>

int main() {
    int a=5, b, *c;
    c = &a; // 포인트 변수 c가 a를 가리킴 *c=a=5
    b = ++*c;
    printf("%d \n", b);
    // 결과
    // 6

    int d=10, *e;
    e = &d; // *e=d=10
    for (int i=0; i<5; i++)
        *e += i; // *e=10+1+2+3+4=15
    printf("%d \n", *e);
    // 결과
    // 15

    int f=31, g, *h, *o;
    h = &f; // *h=f=31
    o = &g; // *o=g=0
    *o = --*h%3 ? f+f : f*f; // *h=30=f  30%3 ? 60 : 900 = 900(거짓)
    printf("%d \n", *o);
    // 결과
    // 900

    int p=5, q=7, r, *s;
    s = &r; // *s=r=0
    *s = p&q; // *s = 5&7 = 2진수(101&111) = 2진수(101) = 5 = r
    printf("%d \n", r);
    // 결과
    // 5

}