#include <stdio.h>
main()
{
	int a = 21, b = 10;
	if (a % 2 == 0)
		if (b % 2 == 0)
			printf("��� ¦��\n");
		else
			printf("a : ¦��, b : Ȧ��\n");
	else
		if (b % 2 == 0)
			printf("a : Ȧ��, b : ¦��\n");
		else
			printf("��� Ȧ��\n");
}