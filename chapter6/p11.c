#include <stdio.h>

int main()
{
    double e;
    int i, j, n;
    long long int total;

    printf("Enter a number: ");
    scanf("%d", &n);

    e = 0.0;
    for (i = 1; i <= n; i++)
    {
        total = 1;
        for (j = 1; j <= i - 1; j++)
        {
            total *= j;
        }

        e += 1.0 / total;
        //printf("%lld ", total);
    }

    printf("e value of %lf\n", e);

    return 0;
}
