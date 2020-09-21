#include <stdio.h>
int main() {
   printf("%d \n", 2543);  // 2543
   printf("%3d \n", 2543);  // 2543
   printf("%6d \n", 2543);  // __2543
   printf("%-6d \n", 2543);  // 2543__
   printf("%06d \n", 2543);  // 002543

   printf("%f \n", 245.5555);  // 245.555500
   printf("%.3f \n", 245.5555);  // 245.556
   printf("%8.2f \n", 245.5555);  // __245.56

   printf("%.3s \n", "help me");  // hel
   printf("%3s \n", "help me");  // help me
   printf("%8.6s \n", "help me");  // __help m
   printf("%-8.6s \n", "help me");  // help m__

   printf("10진수:%d \t 8진수:%o \n", 250, 250);  // 10진수:250   8진수:372
   printf("\'A\'는 문자로 %c, 아스키코드로 %d \n", 'A', 'A');  // 'A'는 문자로 A, 아스키코드로 65
}