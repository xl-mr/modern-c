#include <stdio.h>

int main()
{
    int i, j, k;

    //a
    i = 3;
    j = 4;
    k = 5;
    printf("%d\n", (i < j) || (++j < k)); // 3 < 4 || 5 < 5  output: 1
    printf("%d %d %d\n", i, j, k); // 3 4 5

    //b
    i = 7;
    j = 8;
    k = 9;
    printf("%d\n", (i - 7) && (j++ < k)); // 0 && 8 < 9 output: 0
    printf("%d %d %d\n", i, j, k); // 7 8 9

    //c
    i = 7;
    j = 8;
    k = 9;
    printf("%d\n", (i = j) || (j = k)); // 8 || 9 output: 1
    printf("%d %d %d\n", i, j, k); // 8 8 9

    //d
    i = 1;
    j = 1;
    k = 1;
    printf("%d\n", (++i || ++j) && ++k); // 2 || 2 && 2 
    printf("%d %d %d\n", i, j, k); // 2 1 2

    return 0;
}
