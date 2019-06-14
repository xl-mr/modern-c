#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(const char *s1, const char *s2);

int main(void)
{
    //printf("%s\n", concat("abc", "def"));
    int *a, i, n = 10;
    //a = (int *)malloc((unsigned long)n * sizeof(int));
    //memset(a, 0, (size_t)n);
    a = (int *)calloc((size_t)n, sizeof(int));

    printf("realloc before: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");

    printf("realloc after: \n");
    a = realloc(a, (n + 3) * sizeof(int));
    memset(a, 0, (n + 3) * sizeof(int));
    for (i = 0; i < n + 3; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
    free(a);

    return 0;
}

char *concat(const char *s1, const char *s2)
{
    char *res;

    res = (char *)malloc(strlen(s1) + strlen(s2) + 1);
    
    if (res == NULL) {
        return NULL;
    }
    
    strcpy(res, s1);
    strcat(res, s2);

    return res;
}

