#include <stdio.h>

int main()
{
    float num, max;

    printf("Enter a number: ");
    scanf("%f", &num);
    
    max = num;
    while (num > 0)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > max)
        {
            max = num;
        }
    }

    printf("The largest number entered was %.4f.\n", max);

    return 0;
}
