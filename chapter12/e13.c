#include <stdio.h>

#define N 10

int main(void)
{
    int ident[N][N], *p = ident[0], i;
    
    i = N;
    for (; p < ident[0] + N * N - 1; p++) {
        if (i == N) {
            *p = 1;
            i = 0;
        } else {
            *p = 0;
            i++;
        }
    }

    i = 0;
    for (p = ident[0]; p < ident[0] + N * N - 1; p++) {
        printf("%d ", *p);
        if (i == N) {
            i = 0;
            printf("\n");
        } else {
            i++;
        }
    }


    return 0;
}
