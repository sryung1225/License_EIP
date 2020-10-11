#include <stdio.h>
int main() {
	int a, hap = 0;
	for (a = 0; a < 10; ++a, hap += a);
	printf("%d, %d\n", a, hap);
}

// for (a = 0; a < 10; ++a, hap += a);
// a=0부터 a++과 hap+=a를 하면서 a=10이 되면 탈출

// a=0 hap=0
// a=0 a=1 hap=1
// a=1 a=2 hap=1+2
// a=2 a=3 hap=1+2+3
// a=9 a=10 hap=1+2+3+...+10

// 결과
// 10, 55