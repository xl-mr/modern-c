#include <stdio.h>
#include <string.h>

int main()
{
    int i,j, m;
    int n = 4;
    int a[n][n];
    int row[n];
    int column[n];
    int diagonal[2] = {0};

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);   
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%-2d ", a[i][j]);
        }
        printf("\n");
    }

    memset(row, 0, n * sizeof(int));
    memset(column, 0, n * sizeof(int));
    for (i = 0, m = n - 1; i < n; i++,m--)
    {
        for (j = 0; j < n; j++)
        {
            row[i] += a[i][j];
            column[i] += a[j][i];
            if (i == j)
            {
                diagonal[0] += a[i][i];
            }
        }
        diagonal[1] += a[i][m];
    }

    // rows
    printf("Row sums: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", row[i]);
    }
    printf("\n");

    //columns
    printf("Column sums: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", column[i]);
    }
    printf("\n");

    //diagonal
    printf("Diagonal sums: ");
    for (i = 0; i < 2; i++)
    {
        printf("%d ", diagonal[i]);   
    }
    printf("\n");
    
    return 0;
}
