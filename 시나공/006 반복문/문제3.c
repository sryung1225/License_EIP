#include <stdio.h>
int main() {
    int i=10, hap=0;
    while (i>1){
        i--;
        if(i%3==1)
            hap+=i;
    }
    printf("%d\n", hap);
}

// i=10 i=9 9%3=0
// i=9 i=8 8%3=2
// i=8 i=7 7%3=1 hap=7
// i=5 i=4 4%3=1 hap=7+4=11
// i=2 i=1 1%3=1 hap=11+1=12

// 결과 12