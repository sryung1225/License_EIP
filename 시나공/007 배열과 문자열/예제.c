#include <stdio.h>
int main()
{
	int a[5];
	int i;
	for (i = 0; i < 5; i++)
		a[i] = i + 10; // a=[10, 11, 12, 13, 14]
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
}

// 결과
// 10 11 12 13 14