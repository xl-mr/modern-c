#include <stdio.h>

int main()
{
    int ch;
    
    printf("Enter phone number: ");

    while ((ch = getchar()) != '\n')
    {
        switch (ch) {
            case 'A':
            case 'B':
            case 'C':
                ch = 50;
                break;
            case 'D':
            case 'E':
            case 'F':
                ch = 51;
                break;
            case 'G':
            case 'H':
            case 'I':
                ch = 52;
                break;
            case 'J':
            case 'K':
            case 'L':
                ch = 53;
                break;
            case 'M':
            case 'N':
            case 'O':
                ch = 54;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                ch = 55;
                break;
            case 'T':
            case 'U':
            case 'V':
                ch = 56;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                ch = 57;
                break;
            default:
                break;
        }
        putchar(ch);
    }

    printf("\n");

    return 0;
}
