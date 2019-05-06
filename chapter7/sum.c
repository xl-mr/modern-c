#include <stdio.h>

int main()
{
    double n, sum = 0.00;
    
    printf("This program sums a series of doubel.\n");
    printf("Enter doubles (0 to terminate): ");

    scanf("%lf", &n);

    while (n != 0.0 || n != 0.00)
    {
        sum += n;
        scanf("%lf", &n);
    }

    printf("This sum is: %lf\n", sum);

    return 0;
}
