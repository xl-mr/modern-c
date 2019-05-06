#include <stdio.h>

int main()
{
    int ch, num, length;
    
    printf("Enter a sentence: ");

    num = 0;
    length = 0;
    while ((ch = getchar()) != '\n')
    {
        if (ch != ' ')
        {
            length++;
        }
        else if (ch == ' ')
        {
            num++;
        }
    }

    if (ch == '\n')
    {
        num++;
    }

    printf("num = %d, length = %d\n", num, length);

    printf("Average word length: %.1f\n", (float)length / num);

    return 0;
}
