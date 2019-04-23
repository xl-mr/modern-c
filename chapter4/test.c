#include <stdio.h>

int main()
{
    int i = 13;
    int j = 7;

    printf("%d\n", (-i) / j);
    printf("%d\n", i / (-j));

    printf("%d\n", (-i) % j);
    printf("%d\n", i % (-j));

    int x;
    scanf("%d", &x);
    printf("%d\n", x);


    return 0;
}
