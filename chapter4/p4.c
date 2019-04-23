#include <stdio.h>
#include <string.h>

int main()
{
    int i, x, y;
    int a[10];

    printf("Enter a number betwwen 0 and 32767: ");
    scanf("%d", &x);
    printf("In octal, your number is: 0%o\n", x);

    i = 0;
    memset(a, 0, 10 * sizeof(int));
    while (x != 0)
    {
        y = x % 8;
        a[i] = y;
        x /= 8;
        i++;
        //printf("%d", y);
    }
    //printf("\n");
    
    printf("In octal, your number is: 0");
    for (i--; i >=0; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

