#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch, v, total;
    printf("enter a word: ");

    v = 0;
    total = 0;
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        switch (ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                v = 1;
                break;
            case 'D':
            case 'G':
                v = 2;
                break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                v = 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                v = 4;
                break;
            case 'K':
                v = 5;
                break;
            case 'J':
            case 'X':
                v = 8;
                break;
            case 'Q':
            case 'Z':
                v = 10;
                break;
            default:
                break;
        }
        total += v;
    }

    printf("Scrabble value: %d\n", total);

    return 0;
}
