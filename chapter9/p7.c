#include <stdio.h>
#include <stdbool.h>

long my_pow(int x, int n);
bool odd(int x);

int main(void)
{
    printf("5 的6次方 = %ld\n", my_pow(5,6));
    printf("5 的5次方 = %ld\n", my_pow(5,5));

    return 0;
}

long my_pow(int x, int n)
{
    int base, i;
    long total;

    base = n / 2;

    total = 1;
    for (i = 0; i < base; i++) {
        total *= x;
    }

    if (odd(n)) {
        return total * total * x;
    }
    
    return total * total;
}

bool odd(int x)
{
    return x % 2 != 0;
}
