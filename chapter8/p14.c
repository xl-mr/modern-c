#include <stdio.h>
#include <string.h>

int main(void)
{
    int ch, i, endChar, j, k;
    char str[30];

    printf("Enter a sentence: ");

    i = 0;
    endChar = 0;
    while ((ch = getchar()) != '\n') {
        if (ch == '?' || ch == '.' || ch == '!') {
            endChar = ch;
            break;
        }
        //printf("%c", ch);
        str[i] = (char)ch;
        i++;
    }

    str[i] = '\0';

    printf("Reversal of sentence: ");
    k = 0;
    for (i = (int)strlen(str) - 1; i >= 0; i--) {
        k++;
        if (str[i] == ' ') {
            for (j = i + 1; j < i + k; j++) {
                printf("%c", str[j]);
            }
            printf(" ");
            k = 0;
        }

        if (i == 0) {
            for (j = i; j < k; j++) {
                printf("%c", str[j]);
            } 
            k = 0;
        }
    }
    printf("%c\n", endChar);

    return 0;
}
