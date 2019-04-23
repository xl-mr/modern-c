#include <stdio.h>

int main()
{
    int i, j;

    //a
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j); // 6 6*3 - 2 = 16

    //b
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j); // 6 3 - 2 * 5 = -7

    //c
    i = 5;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j); // 4 3 * 5 + 2 = 17

    //d
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j); // 6 3 + 6 * 2 = 15

    return 0;
}
