#include <stdio.h>
#include <string.h>

int main()
{
    char str[15];
    int i;
    
    printf("Enter phone number: ");
    scanf("%15s", str);

    for (i = 0; i < (int)strlen(str);i++)
    {
        switch (str[i]) {
            case 'A':
            case 'B':
            case 'C':
                str[i] = 50;
                break;
            case 'D':
            case 'E':
            case 'F':
                str[i] = 51;
                break;
            case 'G':
            case 'H':
            case 'I':
                str[i] = 52;
                break;
            case 'J':
            case 'K':
            case 'L':
                str[i] = 53;
                break;
            case 'M':
            case 'N':
            case 'O':
                str[i] = 54;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                str[i] = 55;
                break;
            case 'T':
            case 'U':
            case 'V':
                str[i] = 56;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                str[i] = 57;
                break;
            default:
                break;
        }
    }

    printf("In numeric form: %s\n", str);

    return 0;
}
