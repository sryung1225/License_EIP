#include <stdio.h>
int main() {
    float a = 123456789.0e-5f;
    printf("소수점a = %6.1f   지수형a = %e\n", a, a);

    // 결과 
    // 소수점a = 1234.6   지수형a = 1.234568e+03
}