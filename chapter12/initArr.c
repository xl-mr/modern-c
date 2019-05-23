#include <stdio.h>
#include <string.h>

#define ROWS 10
#define COLS 10

int main(void)
{
    int a[ROWS][COLS], i, j, *p;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            a[i][j] = 0;
        }
    }

    printf("one: \n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (p = &a[0][0]; p <= &a[ROWS - 1][COLS - 1]; p++) {
        *p = 1;
    }

    printf("two: \n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < ROWS; i++) {
        memset(a[i], 0, sizeof(int) * COLS);
    }

    printf("three: \n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
