#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char str[30];
    int ch, i, j, len;
    bool check = true;

    i = 0;
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        str[i++] = (char)ch;
    }
    str[i] = '\0';
    //printf("%s, len = %lu\n", str, strlen(str));

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
            check = false;
            break;
        }
    }
    
    if (check) {
        printf("Yes.\n");
    } else {
        printf("No.\n");
    }
    
    return 0;
}

