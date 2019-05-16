#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

void read_word(char counts[26]);
bool equal_array(char counts1[26], char counts2[26]);

int main(void)
{
    char word1[20], word2[20];
    bool check;

    read_word(word1);
    read_word(word2);

    check = equal_array(word1, word2);
    
    if (check) {
        printf("The word are anagrams.\n");
    } else {
        printf("The word are not anagrams.\n");
    }

    return 0;
}

void read_word(char counts[26])
{
    printf("Enter first word: ");
    scanf("%s", counts);
}

bool equal_array(char word1[26], char word2[26])
{
    int i;
    bool check;
    char str[26] = {0};

    printf("alpha:  ");
    for (i = 'a'; i < 'a' + 26; i++) {
        printf("%2c ", i);
    }
    printf("\n");

    for (i = 0; i < (int)strlen(word1);i++) {
        str[tolower(word1[i]) - 'a']++;
    }

    printf("before: ");
    for (i = 0; i < 26; i++) {
        printf("%2d ", str[i]);
    }
    printf("\n");

    for (i = 0; i < (int)strlen(word2);i++) {
        str[tolower(word2[i]) - 'a']--;
    }

    printf("after : ");
    for (i = 0; i < 26; i++) {
        printf("%2d ", str[i]);
    }
    printf("\n");
    
    check = true;
    for (i = 0; i < 26; i++) {
        //printf("%d ", str[i]);
        if (str[i] != 0) 
        {
            check = false;
            break;
        }
    }

    return check;
}
