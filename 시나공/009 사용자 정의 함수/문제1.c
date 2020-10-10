// 12와 6을 입력받아 출력 결과가 18, 6이 나오도록

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sub(int i, int j) {
	return i - j;
}
int add(int i, int j) {
	return i + j;
}
int main() {
	int i, j, result;
	int (*pf)(int, int);
	scanf("%d, %d", &i, &j); // i=12 j=6
	pf = add;
	result = pf(i, j);
	printf("%d, ", result);
	pf = sub;
	result = pf(i, j);
	printf("%d", result);
}

// result = pf(12, 6) = add(12, 6) = 18
// result = pf(12, 6) = sub(12, 6) = 6