#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *next;
};

struct node *first = NULL;

int main(void)
{
    struct node *p, *q;

    p = first;
    while (p != NULL) {
        q = p;
        p = p->next;
        free(q);
    }

    return 0;
}
