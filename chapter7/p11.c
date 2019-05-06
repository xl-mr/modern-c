#include <stdio.h>
#include <stdbool.h>

int main()
{
    int ch;
    bool check = false;
    char firstName;

    printf("Enter a first and last name : ");
    scanf("%c", &firstName);

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
        {
            check = true;
            ch = 0;
        }
        if (check)
        {
            putchar(ch);
        }
    }

    printf(", %c.\n", firstName);

    return 0;
}
