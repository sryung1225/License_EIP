// 다음은 5개의 정수를 입력받아 그 중 홀수의 개수를 출력하는 알고리즘을 C언어로 구현한 코드이다.

#include <stdio.h>
int main() {
	int i, a[5], cnt = 0;

	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]); // a[5]={1,2,3,4,5}

	for (i = 0; i < 5; i++) {
		if (a[i] % 2 != 0) // a[i]%2==1 : 홀수
			cnt = cnt + 1;
	}
	printf("홀수의 개수 : %d개", cnt);
}