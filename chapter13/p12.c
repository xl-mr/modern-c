#include <stdio.h>
#include <string.h>

int main(void)
{
    int ch, last_char, i, j;
    char str[30][20];

    printf("Enter a sentence: ");

    i = 0;
    j = 0;
    last_char = 0;
    while ((ch = getchar()) != '\n') {
        if (ch == '?' || ch == '.' || ch == '!') {
            last_char = ch;
            str[i][j] = '\0';
            //printf("%s ", str[i]);
            break;
        }
        if (ch == ' ') {
            str[i][j] = '\0';
            //printf("%s ", str[i]);
            i++;   
            j = 0;
            continue;
        }
        str[i][j] = (char)ch;
        j++;
    }

    printf("i= %d\n", i);

    for (; i >= 0; i--) {
        printf("%s ", str[i]);
    }

    printf("%c\n", last_char);
    
    return 0;
}
