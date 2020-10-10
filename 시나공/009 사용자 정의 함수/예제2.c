#include <stdio.h>
func(i, j); // 자료형이 앞에 따로 없음 (리턴 값이 있기 때문에 void X)
int main()
{
    int a = 3, b = 12;
    a = func(a, b);
    printf("%d, %d\n", a, b);

}
func(i, j)
int i, j;
{
    i *= 3;
    j /= 3;
    printf("%d, %d\n", i, j);
    return i;
}

// a=3, b=12
// a=func(3, 12) => i=9, j=4, printf(9, 4) => return 9 => a=9
// printf(9, 12)

// 결과
/* 9, 4
   9, 12 */