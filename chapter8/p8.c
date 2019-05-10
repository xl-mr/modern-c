#include <stdio.h>

#define N 5

int main(void)
{
    int i, j, row_total[N], col[N][N], col_total[N];
    int arr[N][N], score_max[N], score_min[N];
    
    for (i = 0; i < N; i++) {
        printf("Enter row %d:  " ,i + 1);
        for (j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        row_total[i] = 0;
        for (j = 0; j < N; j++) {
            row_total[i] += arr[i][j];
            col[i][j] = arr[j][i];
        }
    }

    printf("Row totals: ");
    for (i = 0; i < N; i++) {
        printf("%d ", row_total[i]);
    }
    printf("\n");

    printf("Row avg: ");
    for (i = 0; i < N; i++) {
        printf("%.2f ", row_total[i]/ 5.0);
    }
    printf("\n");

    for (i = 0; i < N; i++) {
        col_total[i] = 0;
        score_max[i] = col[i][0];
        score_min[i] = col[i][0];
        for (j = 0; j < N; j++) {
            col_total[i] += col[i][j];
            // max
            if (col[i][j] > score_max[i]) {
                score_max[i] = col[i][j];
            }
            if (col[i][j] < score_min[i]) {
                score_min[i] = col[i][j];
            }
        }
    }
    printf("\n");

    printf("Column total: ");
    for (i = 0; i < N; i++) {
        printf("%d ", col_total[i]);
    }
    printf("\n");

    printf("Column avg: ");
    for (i = 0; i < N; i++) {
        printf("%.2f ", col_total[i]/ 5.0);
    }
    printf("\n");
    
    printf("every class score max: ");
    for (i = 0; i < N; i++) {
        printf("%d ", score_max[i]);
    }
    printf("\n");
    
    printf("every class score min: ");
    for (i = 0; i < N; i++) {
        printf("%d ", score_min[i]);
    }
    printf("\n");

    return 0;
}
