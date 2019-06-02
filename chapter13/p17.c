#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(const char *str)
{
    int i, j, len;

    i = 0;
    len = (int)strlen(str);
    j = len - 1;
    for (; i < len / 2; i++, j--) {
        if (!isalpha(str[i])) {
            j++;
            continue;
        }
        if (!isalpha(str[j])) {
            i--;
            continue;
        }
        if (str[i] != str[j]) {
            return false;
        }
    }
    
    return true;
}

int main(void)
{
    int ch, i;
    char str[30];
    bool check;

    printf("Enter a message: ");

    i = 0;
    while ((ch = getchar()) != '\n') {
        str[i++] = (char)ch;
    }
    str[i] = '\0';

    check = is_palindrome(str);
        
    if (check) {
        printf("Yes.\n");
    } else {
        printf("No.\n");
    }
    
    return 0;
}

