#include <stdio.h>
int main() {
	int a[5], b = 1, sum = 0;
	for (int i = 0; i < 5; i++) {
		a[i] = b;
		b *= 2;
	}
	for (int i = 0; i < 5; i += 2)
		sum += *(a + i);
	printf("%d", sum);
}

// i=0 a[0]=1 b=1*2=2
// i=1 a[1]=2 b=2*2=4
// a = {1, 2, 4, 8, 16} b=32
// i=0 sum=sum+a[0]=0+1=1
// i=2 sum=sum+a[2]=1+4=5
// i=4 sum=sum+a[4]=5+16=21

// 결과 21