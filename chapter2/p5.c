#include <stdio.h>

int main()
{
    float x, total;
    
    printf("Enter a num: ");
    scanf("%f", &x);

    total = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    printf("total : %f\n", total);

    return 0;
}
