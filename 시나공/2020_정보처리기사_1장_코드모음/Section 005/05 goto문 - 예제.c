#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main()
{
	int a;
again:
	scanf("%d", &a);
	if (a <= 10)
		goto again;
	else
		printf("%d�� 10���� Ů�ϴ�.", a);
}