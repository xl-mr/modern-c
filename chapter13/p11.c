#include <stdio.h>

double compute_average_word_length(const char *sentence)
{
    int num, length;

    num = 0;
    length = 0;
    while (*sentence)
    {
        if (*sentence != ' ')
        {
            length++;
        }
        else if (*sentence == ' ')
        {
            num++;
        }
        sentence++;
    }
    num++;

    printf("num = %d, length = %d\n", num, length);
    
    return (double)length / num;
}

int main()
{
    char str[50];
    
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    
    printf("Average word length: %.1f\n", compute_average_word_length(str));

    return 0;
}
