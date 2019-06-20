#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

struct node *first = NULL;

struct node *find_last(struct node *list, int n);

int main(void)
{
    return 0;
}

struct node *find_last(struct node *list, int n)
{
    struct node *last;

    last = NULL;
    while (list != NULL) {
        if (n == list->value) {
            last = list;
        }
        list = list->next;
    }

    return last;
}
