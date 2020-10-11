#include <stdio.h>
main() {
	char c[4] = { '+', '-', '/', '*' };
	double p;
	switch (c[3])
	{
	case '+':
		p = 0;
		for (int i = 0; i < 5; i++, p += i)
			;
		break;
	case '-':
		p = 0;
		for (int i = 0; i < 5; i++, p -= i)
			;
		break;
	case '/':
		p = 1;
		for (int i = 0; i < 5; i++, p /= i)
			;
		break;
	default:
		p = 1;
		for (int i = 0; i < 5; i++, p *= i)
			;
	}
	printf("%.3f", p);
}

// c[3] = * : default 실행
// for( 시작 ; 종료조건 ; 실행문1, 실행문2 ); : 실행문1 -> 실행문2 순으로 순차 진행
// i=0 i=++0 p=1*1
// i=1 i=++1 p=1*1*2
// i=2 i=++2 p=1*1*2*3
// i=3 i=++3 p=1*1*2*3*4
// i=4 i=++4 p=1*1*2*3*4*5=120
// i=5 i<5 조건에 안맞아 종료
// %.3f : 소수점 아래 3자리

// 결과 120.000