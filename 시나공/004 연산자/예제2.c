#include <stdio.h>
int main() {
    /* 대입 연산자 */
    int a=2; 
    int b=3;
    int c=4;
    int d=5;
    printf("%d ", a += 3); // a+3 = 2+3 = 5 = a
    printf("%d ", b *= 3); // b*3 = 3*3 = 9 = b
    printf("%d ", c += 10 + ++a); // 4 + 10 + 6 = 20 = c. a=6
    printf("%d ", d >>= 1); // d>>1 = 2진수(101) >> 1 = 2진수(10) => 2 = d
    printf("%d ", d *= 10 - b++); // 2*(10-9) = 2 = d. b=10
    printf("%d\n", a += b += c); // a(+b(+c)) =  a + b + c = 6+10+20=36 = a

    a=2; b=3; c=4; d=5;
    printf("%d ", d += b *= c /= a); // d = d(+b(*c(/a))) = d+(b*c/a) = 5+3*4/2 = 5+6 = 11

    a=2; b=3; c=4; d=5;
    printf("%d ", a -= ++d / b--); // a = a(-(++d)/(b--)) = 2-(6/3) = 0, d=6, b=2

    a=2; b=3; c=4; d=5;
    printf("%d ", b += c * a<<2); // b = b+(c*(a<<2)) = 3+(4*8) = 35

    a=2; b=3; c=4; d=5;
    printf("%d ", a %= c | b & d - b); // a = a%((c|(b&(d-b))) = 2%(4|(3&(5-3))) = 2%(100|(011&010)) = 2%(100|010) = 2%6 = 2

    a=2; b=3; c=4; d=5;
    printf("%d ", c *= d <<= (b == ++a)); // c = c*(d<<(b == ++a)) = 4*(5<<(3==3)) = 4*(101<<1) = 4*(1010) = 4*(8+2) = 4*10 = 40
}