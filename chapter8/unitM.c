#include <stdio.h>

#define N 10

int main(void)
{
    int arr[N][N], i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j) {
                arr[i][j] = 1;  
            } else {
                arr[i][j] = 0;  
            }
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
