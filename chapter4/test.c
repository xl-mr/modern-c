#include <stdio.h>

int main()
{
    int i = 13;
    int j = 7;

    printf("%d\n", (-i) / j);
    printf("%d\n", i / (-j));

    printf("%d\n", (-i) % j);
    printf("%d\n", i % (-j));


    return 0;
}
