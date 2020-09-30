/* goto문 */

#include <stdio.h>
int main() {
    int a;
again: // goto문의 주소값.
    scanf("%d", &a);
    if(a<=10)
        goto again;
    else
        printf("%d는 10보다 큽니다.", a);
}