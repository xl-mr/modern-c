#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t size)
{
    void *ptr = malloc(size);
    if (ptr == NULL) {
        fprintf(stderr, "malloc sign error.\n");
        exit(EXIT_FAILURE);
    }

    return ptr;
}

int main(void)
{
    int i;
    int *a = (int *)my_malloc(sizeof(int) * 10);
    for (i = 0; i < 10; i++) {
        a[i] = i;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
    
    return 0;
}
