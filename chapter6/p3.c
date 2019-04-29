#include <stdio.h>

int main()
{
    int reminder, m, n, gcd, gcd1;

    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    gcd = n;
    gcd1 = n;
    while (gcd1 != 0)
    {
        reminder = m % gcd1;
        gcd = gcd1;
        gcd1 = reminder;
    }

    printf("In lowest terms: %d/%d\n", m / gcd, n / gcd);

    return 0;
}
