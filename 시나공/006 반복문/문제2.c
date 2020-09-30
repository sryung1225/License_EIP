#include <stdio.h>
int main(void) {
    int i, j, n;
    n = 7;
    for (i=1; i<=n; i++) {
        for (j=1; j<=i; j++)
            printf("%3d", j);
        printf("\n");
    }
}

// 결과
/* 1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5
   1 2 3 4 5 6
   1 2 3 4 5 6 7 */