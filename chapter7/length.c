#include <stdio.h>

int main()
{
    int len, ch;

    printf("Enter a message: ");

    len = 0;
    while ((ch = getchar()) != '\n')
    {
        len++;
    }

    printf("Your message was %d characters long.\n", len);

    return 0;
}
