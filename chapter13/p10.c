#include <stdio.h>
#include <string.h>

void reverse_name(char *name)
{
    char *q = name;
    char p[2] = {*name};

    while (*q) {
        if (*q == ' ') {
            q++;
            break;
        }
        q++;
    }

    strcpy(name, q);
    strcat(name, ", ");
    strcat(name, p);
    strcat(name, ".");
}

int main()
{
    char name[50];

    printf("Enter a first and last name : ");
    scanf("%[^\n]", name);

    reverse_name(name);

    printf("reverse name = %s\n", name);

    return 0;
}
