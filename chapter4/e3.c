#include <stdio.h>

int main()
{
    int i = 8;
    int j = 5;

    printf("%d\n", i / j);
    printf("%d\n", (-i) / j);
    printf("%d\n", i / (-j));
    printf("%d\n", (-i) / (-j));

    return 0;
}
