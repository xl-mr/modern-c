#include <stdio.h>

#define N 30

int main(void)
{
    int i, ch;
    char str[N + 1];

    i = 0;
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        *(str + i) = (char)ch;
        i++;
    }
    str[i] = '\0';
   
    printf("Reversal is: ");
    for (i--; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");

    return 0;
}
