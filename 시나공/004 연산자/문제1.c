#include <stdio.h>
int main() {
    int result, a= 100, b=200, c=300;
    result = a < b ? b++ : --c;
    printf("%d, %d, %d\n", result, b, c);


    // 100 < 200 ? 200 : 299
    // 참 ? 200 : 299
    // result = 200, b = 201, c = 300(결과적으로 거짓이 아니였기 때문에 --c이 적용되지 않음)

    // 결과
    // 200, 201, 300
}