#include <stdio.h>

int main()
{
    int sum, i;

    sum = 0;
    for (i = 0; i < 10; i++)
    {
        if (i % 2)
        {
            goto jump;
        }
        printf("%d ", i);
        sum += i;
        jump:;
    }

    printf("sum is %d\n", sum);

    return 0;
}
