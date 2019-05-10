#include <stdio.h>

#define SIZE(arr) ((int)(sizeof(arr) / sizeof(arr[0])))
#define BALANCE 100.00
#define N 5

int main(void)
{
    int i, rate, num_years, year, month;
    double value[N];

    printf("Enter interest rate: ");
    scanf("%d", &rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nyears");
    for ( i = 0; i < SIZE(value); i++)
    {
        printf("%6d", rate + i);
        value[i] = BALANCE;
    }

    printf("\n");
    
    for ( year = 1; year <= num_years; year++)
    {
        printf("%3d   ", year);
        for (i = 0; i < SIZE(value); i++)
        {
            for (month = 1; month <= 12; month++) 
            {
                value[i] += ((double) (rate + i) / 12) / 100.0 * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");       
    }

    return 0;
}
