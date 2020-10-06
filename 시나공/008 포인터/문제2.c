#include <stdio.h>
int main()
{
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
	char* p; // 포인터 변수 p
	p = &a[2]; // *p=a[2]=C
	printf("%c, %c\n", *p, *(p - 2));
}

// 결과
// C, A