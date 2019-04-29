#include <stdio.h>

int main()
{
    int days, startDay, i;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=sat): ");
    scanf("%d", &startDay);

    for (i = 0; i < startDay - 1; i++)
    {
        printf("   ");
    }

    for (i = 0; i < days; i++)
    {
        printf("%3d", i + 1);
        if ((startDay + i) % 7 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
