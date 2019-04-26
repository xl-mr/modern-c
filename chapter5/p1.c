#include <stdio.h>

int main()
{
    int x, y, i;

    printf("Enter a number: ");
    scanf("%d", &x);

    i = 0;
    y = x;
    while (y != 0)
    {
        y /= 10;
        i++;
    }

    printf("The number %d has %d digits.\n", x, i);

    return 0;
}
