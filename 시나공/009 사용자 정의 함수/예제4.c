#include <stdio.h>
int main()
{
	printf("%d", factorial(5));
}
factorial(int n) {
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

// factorial(5)
// 5 >= 1 => 5*factorial(4)
// 4 >= 1 => 5*4*factorial(3)
// 3 >= 1 => 5*4*3*factorial(2)
// 2 >= 1 => 5*4*3*2*factorial(1)
// 1 == 1 => 5*4*3*2*1 = 120

// 결과 120