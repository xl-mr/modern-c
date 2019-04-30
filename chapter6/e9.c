#include <stdio.h>

int main()
{
    int i, j;
    i = 10;
    j = 0;
    while (i >= 1)
    {
        if (j == 7)
        {
            break;
        }
        printf("%d ", i++);
        i /= 2;
        j++;
    }
    //10 5 3 2 1 1 ...

    printf("\n");

    return 0;
}
