#include <stdio.h>
#include <string.h>
int main()
{
	int k, n;
	char st[] = "I am Tom!";
	char temp;
	n = strlen(st); // n=9
	n--;
	for (k = 0; k < n; k++)
	{
		temp = *(st + k);
		*(st + k) = *(st + n);
		*(st + n) = temp;
		n--;
	}
	printf("%s\n", st);
}

// n=8 k=0 temp=st[0]=I st[0]=st[8]=! st[8]=I  => st[] = ! am TomI
// n=7 k=1 temp=st[1]=_ st[1]=st[7]=m st[7]=_  => st[] = !mam To I
// n=6 k=2 temp=st[2]=a st[2]=st[6]=o st[6]=a  => st[] = !mom Ta I
// n=5 k=3 temp=st[3]=m st[3]=st[5]=T st[5]=m  => st[] = !moT ma I

// 결과 !moT ma I