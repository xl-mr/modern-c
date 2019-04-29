#include <stdio.h>

int main()
{
    double n, m;
    int i, j;
    long long int total;

    printf("Enter a number: ");
    scanf("%lf", &n);

    m = 0;
    for (i = 1;; i++)
    {
        total = 1;
        for (j = 1; j <= i - 1; j++)
        {
            total *= j;
        }
        if ((1.0 / total) <= n)
        {
            break;
        }
        m += 1.0 / total;
    }

    printf("The value of %f\n", m);

    return 0;
}
