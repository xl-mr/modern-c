#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int x, y, i, j, total;
    int a[10];

    printf("Enter a two-digit number: ");
    scanf("%d", &x);

    j = 0;
    memset(a, 0, 10 * sizeof(int));
    printf("The reversal is: ");
    while (x != 0)
    {
        y = x % 10;
        a[j] = y;
        x = x / 10;
        j++;
        printf("%d", y);
    }
    printf("\n");

    total = 0;
    j--;
    for (i = 0; i < 10 ; i++, j--)
    {
        if (a[i] != 0)
        {
            total += a[i] * pow(10, j);
        }
    }

    printf("The reversal is: %d\n", total);

    return 0;
}
