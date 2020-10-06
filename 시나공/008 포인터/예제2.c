#include <stdio.h>
int main()
{
	int a = 3, * b;
	b = &a;
	printf("%d", ++*b);
}

// a=3
// b=&a  *b=a=3

// 결과
// 4