#include <stdio.h>
int main()
{
	int a[5];
	int i;
	int* p; // 포인터 변수 p
	for (i = 0; i < 5; i++)
		a[i] = i + 10;
	p = a;
	for (i = 0; i < 5; i++)
		printf("%d ", *(p + i));
}

// a={10, 11, 12, 13, 14}
// p=a  *p=*a

// 결과
// 10 11 12 13 14