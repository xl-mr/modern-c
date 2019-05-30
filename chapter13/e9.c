#include <stdio.h>
#include <string.h>

#define N 100

int main(void)
{
    char s1[N], s2[N];

    strcpy(s1, "computer");
    strcpy(s2, "science");

    if (strcmp(s1, s2) < 0) {
        strcat(s1, s2);
    } else {
        strcat(s2, s1);
    }

    s2[strlen(s2) -6] = '\0';

    printf("s1 = %s, s2 = %s\n", s1, s2); // s1 = computer science s2 = s

    return 0;
}
