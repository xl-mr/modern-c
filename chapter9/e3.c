#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
    printf("%d\n", gcd(319, 377));

    return 0;
}

int gcd(int m, int n)
{
    int mod;
    while (n != 0) {
        mod = n;
        n = m % n;
        m = mod;
    }
    
    return m;
}

