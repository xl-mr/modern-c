#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word)
{
    int v, sum;

    v = 0;
    sum = 0;
    while (*word) {
        switch (toupper(*word))
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
        sum += v;
        word++;
    }

    return sum;
}

int main()
{
    char str[50];
    printf("enter a word: ");
    scanf("%s", str);

    printf("Scrabble value: %d\n", compute_scrabble_value(str));

    return 0;
}
