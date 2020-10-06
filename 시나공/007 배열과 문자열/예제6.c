// 배열 형태의 문자열 변수

#include <stdio.h>
int main()
{
	char a = 'A';
	char b[9] = "SINAGONG";
	char* c = "SINAGONG"; // 포인터 변수 c에 문자열이 저장된 곳의 주소를 저장
	printf("%c\n", a); // 문자 %c (char)
	printf("%s\n", b); // 문자열 %s (string)
	printf("%s\n", c);
}

// 결과
/* A
   SINAGONG
   SINAGONG */