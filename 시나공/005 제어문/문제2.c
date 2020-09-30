#include <stdio.h>
int main() {
    int jum=95;
    char lev;
    switch (jum/30) // int(95/30)=3
    {
    case 3: // 실행
        lev='A';
        break;
    case 2:
        lev='B';
        break;
    case 1:
        lev='C';
        break;
    default:
        lev='D';
        break;
    }
    printf("%c등급\n", lev);
}

// 결과
// A등급