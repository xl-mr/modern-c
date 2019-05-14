#include <stdio.h>

int main(void)
{
    int n, i, j, k;

    printf("This program creates a magic square of s specified size.\n");
    printf("The size must be a odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int arr[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    // init
    i = 0;
    j = n / 2;
    arr[i][j] = 1;

    for (k = 2; k <= n*n; k++) {
        i--;
        j++;
        i = (i + n) % n;
        j = (j + n) % n;

        if (arr[i][j] != 0) {
            i++;
            j--;
            i++;
            i = (i + n) % n;
            j = (j + n) % n;
        }
        arr[i][j] = k;
        //printf("i = %d, j = %d, k = %d || ", i, j, k);
    }
    //printf("\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
