#include <stdio.h>

int main()
{
    int n , i;

    printf("This is prints a table squares.\n");
    printf("Enter number of entries int table: ");
    
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}
