#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch, i;

    printf("Enter a sentence: ");

    i = 0;
    while ((ch = getchar()) != '\n') {
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                i++;
                break;
        }
    }

    printf("Your sentence contains %u vowels.\n", i);

    return 0;
}
