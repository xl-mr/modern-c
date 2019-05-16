#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
    printf("%d\n", gcd(319, 377));

    return 0;
}

int gcd(int m, int n)
{
    if (n == 0) {
        return m;
    }

    return gcd(n, m % n);
}

