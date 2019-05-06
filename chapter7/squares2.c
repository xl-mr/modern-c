#include <stdio.h>

int main()
{
    int n , i, ch;

    printf("This is prints a table squares.\n");
    printf("Enter number of entries int table: ");
    
    scanf("%d", &n);
    ch = getchar();

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0)
        {
            printf("Press Enter to continue...");
            while ((ch = getchar()) != '\n')
            {
            
            }
        }
    }

    return 0;
}
