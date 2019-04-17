#include <stdio.h>

int main()
{
    int a = '\100';
    //oct 
    printf("\100");
    printf("\n");
    //hex
    printf("\x40");
    printf("\n");
    //dec
    printf("%c", 64);
    printf("\n");
    //dec int
    printf("%d", a);
    printf("\n");

    return 0;
}
