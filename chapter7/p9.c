#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define HOUR 12

int main()
{
    int h, m, ch;
    bool check;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &h, &m);
    if (h > 12)
    {
        printf("input error\n");
        return 0;
    }
    
    check = false;
    while ((ch = getchar()) != '\n')
    {
        ch = tolower(ch);
        switch(ch) {
            case 'p':
                check = true;
                break;
            case 'm':
                if (!check)
                {
                    printf("Input invalid\n");
                    return 0;
                }
                break;
            default:
                break;
        }
    }
    if (check)
    {
        h += HOUR;
    }
    
    printf("Equivalent 24-hour time: %d:%d\n", h, m);

    return 0;
}
