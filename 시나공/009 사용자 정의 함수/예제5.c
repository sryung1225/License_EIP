#include <stdio.h>
int add(int i, int j) {
	return i + j;
}
int main() {
	int i = 10, j = 5, result;
	int (*pf)(int, int);
	pf = add;
	result = pf(i, j);
	printf("%d", result);
}

// result = pf(10, 5) = add(10, 5) = 15

// 결과 15