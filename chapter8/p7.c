#include <stdio.h>

#define N 5

int main(void)
{
    int i, j, row_total[N], col_total[N];
    int arr[N][N];
    
    for (i = 0; i < N; i++) {
        printf("Enter row %d:  " ,i + 1);
        for (j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        row_total[i] = 0;
        col_total[i] = 0;
        for (j = 0; j < N; j++) {
            row_total[i] += arr[i][j];
            col_total[i] += arr[j][i];
        }
    }

    printf("Row totals: ");
    for (i = 0; i < N; i++) {
        printf("%d ", row_total[i]);
    }
    printf("\n");

    printf("Column totals: ");
    for (i = 0; i < N; i++) {
        printf("%d ", col_total[i]);
    }
    printf("\n");

    return 0;
}
