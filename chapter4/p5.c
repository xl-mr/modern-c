#include <stdio.h>

int main()
{
    int i, odd, even, total;
    int num[11];

    printf("Enter the first 11 digits of a UPC: ");
    for (i = 0; i < 11; i++)
    {
        scanf("%1d", &num[i]);
    }

    odd = 0;
    even = 0;
    for (i = 0; i < 11; i++)
    {
        //printf("%d", num[i]);
        if ((i + 1) % 2 == 0)
        {
            //printf("%d", num[i]);
            even += num[i];
        }   
        else
        {
            odd += num[i];
        }
    }
    printf("\n");

    printf("odd num %d, even num %d\n", odd, even);

    odd *= 3;
    total = odd + even;
    //printf("total %d\n", total);
    printf("Check digit: %d\n", 9 - (total - 1) % 10);

    return 0;
}
