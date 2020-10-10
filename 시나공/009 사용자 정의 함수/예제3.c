#include <stdio.h>
void func(int* i, int* j); // return값 X
int main()
{
    int a = 3, b = 12;
    func(&a, &b);
    printf("%d, %d\n", a, b);
}
void func(i, j)
int* i, * j;
{
    *i *= 3;
    *j /= 3;
    printf("%d, %d\n", *i, *j);
}

// func(&3, &12) => *i=*(&3)*3=9 *j=*(&12)/3=4 => printf(9, 4)
// i가 가리키는 곳의 값 = 9
// j가 가리키는 곳의 값 = 4
// printf(9, 4)

// 결과
/* 9, 4
   9, 4 */