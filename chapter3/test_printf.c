#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d/%d", &x, &y);
    printf("%d %d\n", x, y);

    printf("%03d\n", 1);
    printf("%1.1f\n", 1.111f);

    printf("%3.3s\n", "hello world!");

    return 0;
}
