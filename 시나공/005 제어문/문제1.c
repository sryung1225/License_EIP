#include <stdio.h>
int main() {
    int a=3, b=10;
    if (b>5)
        printf("%x\n", a+b);
    else
        printf("%x\n", b-a);
    
    
    // b=10이므로 if문 적용 a+b=13
    // 13를 16진수 = 0x0d
    // (16진수: 10=a 11=b 12=c 13=d 14=e 15=f)

    // 결과 d
}