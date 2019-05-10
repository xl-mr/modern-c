#include <stdio.h>
#include <ctype.h>

#define N 50

int main(void)
{
    char str[N];
    int ch;
    int i;

    i = 0;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n')
    {
        str[i] = (char)ch;
        i++;   
    }
    str[i] = '\0';
    

    i = 0;
    while (str[i] != '\0')
    {
        str[i] = (char)(toupper(str[i]));
        switch(str[i]) {
            case 'A':
                str[i] = 52;
                break;
            case 'B':
                str[i] = 56;
                break;
            case 'E':
                str[i] = 51;
                break;
            case 'I':
                str[i] = 49;
                break;
            case 'O':
                str[i] = 48;
                break;
            case 'S':
                str[i] = 53;
                break;
        }
        i++;
    }

    printf("In B1FF-speak: %s", str);
    for (i = 0; i < 10; i++) {
        printf("%s", "!");
    }
    printf("\n");

    return 0;
}
