#include <stdio.h>

int main()
{
    float x, total;
    
    printf("Enter a num: ");
    scanf("%f", &x);

    total = ((((3 * x + 2) * x - 5) * x - 1) * x + 7 ) * x - 6;
    printf("total : %f\n", total);

    return 0;
}
