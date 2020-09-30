#include <stdio.h>
int main() {
    int jum=85;
    switch (jum/10) // int(85/10)=8
    {
        case 10: // 100점일 때 break가 없으므로 밑에 있는 case:9 실행 => A학점
        case 9:
        printf("학점은 A입니다.\n"); // 100~90점까지 A 출력
        break;
        case 8: // 실행
        printf("학점은 B입니다.\n");
        break;
        case 7:
        printf("학점은 C입니다.\n");
        break;
        case 6:
        printf("학점은 D입니다.\n");
        break;
        default:
        printf("학점은 F입니다.\n");
    }
}