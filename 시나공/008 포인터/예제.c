// int a;    
// int* b;   b는 포인터 변수. 주소를 저장할거야
// b = &a;   b는 a의 주소
// a = *b;   a는 포인터 변수 b가 저장한 주소에 있는 값 = 즉 a의 주소에 있는 값 = a


#include <stdio.h>
int main()
{
	int a = 50;
	int* b; // 포인터 변수 b
	b = &a; // b는 a의 주소. *b=a
	*b = *b + 20; // *b = a+20 = 70 = a
	printf("%d, %d", a, *b);
}

// 결과
// 70, 70