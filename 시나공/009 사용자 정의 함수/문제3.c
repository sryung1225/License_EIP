#include <stdio.h>
int Fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibonacci(n - 2) + Fibonacci(n - 1);
}
int main(void) {
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("%d ", Fibonacci(i));
	return 0;
}

// Fibonacci(0) = 0
// Fibonacci(1) = 1
// Fibonacci(2) = Fibonaci(0)+Fibonaci(1) = 1
// Fibonacci(3) = Fibonaci(1)+Fibonaci(2) = 2
// Fibonacci(9) = Fibonaci(7)+Fibonaci(8) = 0+1+1+2+3+5+8+13+21=34

// 결과
// 0 1 1 2 3 5 8 13 21 34