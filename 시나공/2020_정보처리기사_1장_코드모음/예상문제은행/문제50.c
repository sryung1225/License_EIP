#include <stdio.h>
int isprime(int number)
{
	int i;
	for (i = 2; i < number; i++)
		if (number % i == 0)
			return 0;
	return 1;
}
int main()
{
	int number = 99, cnt = 0, i;
	for (i = 2; i <= number; i++)
		cnt = cnt + isprime(i);
	printf("%d�� ���� �ʴ� �Ҽ��� %d���Դϴ�.\n", number, cnt);
	return 0;
}