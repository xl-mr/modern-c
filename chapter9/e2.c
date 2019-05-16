#include <stdio.h>
#include <stdbool.h>

bool check(int x, int y, int n);

int main(void)
{
    printf("%u\n", check(5, 6, 10));
    printf("%u\n", check(11, 6, 10));

    return 0;
}

bool check(int x, int y, int n)
{
    return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
}
