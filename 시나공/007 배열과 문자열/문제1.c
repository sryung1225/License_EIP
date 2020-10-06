// 다음 C언어로 구현된 프로그램을 분석하여 그 실행 결과를 쓰시오.

#include <stdio.h>
int main() {
	int exint[] = {2, 4, 2, 47, 6, 4, 7, 2, 3, 4, 5};
	int len = sizeof(exint) / sizeof(int); // 11/1=11
	int value = 0;
	for (int i = 0; i < len; i++) {
		if (exint[i] == 2) {
			value++;
		}
	}
	printf("%d", value);
}

// len=11 i=0 exint[0]=2 value=1
// len=11 i=1 exint[1]=4
// len=11 i=2 exint[2]=2 value=2
// len=11 i=7 exint[7]=2 value=3

// 결과
// 3