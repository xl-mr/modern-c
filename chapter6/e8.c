#include <stdio.h>

int main()
{
    int i, j;
    for (i = 10, j = 0; i >= 1; i /= 2, j++)
    {
        if (j == 7)
        {
            break;
        }
        printf("%d ", i++);
    }
    //10 5 3 2 1 1 ...

    printf("\n");

    return 0;
}
