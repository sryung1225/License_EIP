#include <stdio.h>
void func(int i, int j); // void: 돌아오는 리턴 값이 없음
int main()
{
    int a = 3, b = 12;
    func(a, b); // 리턴값 없음
    printf("%d, %d\n", a, b); // 그대로 3, 12 
}
void func(i, j) 
int i, j;
{
    i *= 3;
    j /= 3;
    printf("%d, %d\n", i, j);
}

// func(3, 12) => i=3*3=9 j=12/3=4 => printf(9, 4)
// printf(a, b) => printf(3, 12)

// 결과
/* 9, 4
   3, 12 */