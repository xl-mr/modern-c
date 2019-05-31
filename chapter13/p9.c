#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *word)
{
    int i = 0;
    while (*word) {
        switch (tolower(*word)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                i++;
                break;
        }
        word++;
    }  

    return i;
}

int main()
{
    char str[50];
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    printf("%s\n", str);

    printf("Your sentence contains %u vowels.\n", compute_vowel_count(str));

    return 0;
}
