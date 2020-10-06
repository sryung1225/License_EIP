#include <stdio.h>
int main()
{
	char* str; // 포인트 변수 str
	str = "KOREA"; // str은 "KOREA"라는 문자열이 저장된 메모리 어딘가의 주소
	printf("%d\n", str); // 주소 출력
	printf("%8.3s\n", str); // 8자리 확보. 오른쪽부터 3글자만 출력
}

// 결과
// 1073778688
//      KOR