#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &num);

    i = 0;
    do {
        num /= 10;
        i++;
    } while (num > 0);

    printf("The number has %d digit.\n", i);

    return 0;
}


