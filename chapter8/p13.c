#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str[20];
    size_t len;
    int i;
    bool check;

    printf("Enter a first and last name : ");
    scanf("%[^\n]", str);

    len = strlen(str);

    printf("%s", str);

    check = false;
    printf("Your entered the name: ");
    for (i = 0; i < (int)len; i++) {
        if (str[i] == ' ') {
            check = true;
        }
        if (check) {
            printf("%c", str[i]);
        }
    }

    printf(", ");

    if (len > 0) {
        printf("%c", str[0]);
    }

    printf(".\n");

    return 0;
}
