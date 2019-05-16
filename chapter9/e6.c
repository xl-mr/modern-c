#include <stdio.h>

int digit(int n, int k);

int main(void)
{
    printf("%d\n", digit(829, 0));
    printf("%d\n", digit(829, 1));
    printf("%d\n", digit(829, 2));
    printf("%d\n", digit(829, 3));
    printf("%d\n", digit(829, 4));

    return 0;
}

int digit(int n, int k)
{
    int i;

    if (k <= 0) {
        return 0;
    }

    for (i = 1; i < k; i++) {
        n /= 10;
    } 

    return n % 10;
}
