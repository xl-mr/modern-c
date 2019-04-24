#include <stdio.h>

int main()
{
    int i, odd, even, total;
    int num[12];

    printf("Enter the first 12 digits of a EAN: ");
    for (i = 0; i < 12; i++)
    {
        //scanf("%1d", &num[i]);
        scanf("%1d", num + i);
    }

    odd = 0;
    even = 0;
    for (i = 0; i < 12; i++)
    {
        //printf("%d", num[i]);
        if ((i + 1) % 2 == 0)
        {
            //printf("%d", num[i]);
            odd += num[i];
        }   
        else
        {
            even += num[i];
        }
    }
    printf("\n");

    printf("odd num %d, even num %d\n", odd, even);

    odd *= 3;
    total = odd + even;
    printf("total %d\n", total);
    printf("Check digit: %d\n", 9 - (total - 1) % 10);

    return 0;
}
