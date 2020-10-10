#include <stdio.h>
func(int* p) {
	printf("%d\n", *p);
	printf("%d\n", p[2]);
}
int main() {
	int a[7] = { 1,2,3,4,5 };
	func(a);
	func(a + 2);
}

// a[7]={1,2,3,4,5,0,0}
// func(a) => printf("1\n 3\n")
// func(a+2) => printf("3\n 5\n")

// 결과
/* 1
   3
   3
   5 */