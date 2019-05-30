#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j;
    char smallest_word[10], largest_word[10], str[20][20];

    i = 0;
    while (1) {
        printf("Enter word: ");
        scanf("%s", str[i]);

        if (strlen(str[i]) == 4) {
            break;
        }
        if (i == 0) {
           strcpy(smallest_word, str[i]); 
           strcpy(largest_word, str[i]); 
        } else {
            for (j = 0; j < i; j++) {
                if (strcmp(str[i], smallest_word) < 0) {
                    strcpy(smallest_word, str[i]);
                } else if (strcmp(str[i], largest_word) > 0) {
                    strcpy(largest_word, str[i]);
                }
            }
        }
        i++;
    }

    printf("\n");

    printf("Small word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}
