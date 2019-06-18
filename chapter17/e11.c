#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

struct node *first = NULL;

int count_occurrences(struct node *list, int n);

int main(void)
{
    return 0;
}

int count_occurrences(struct node *list, int n)
{
    int i;

    i = 0;
    while (list != NULL) {
        if (n == list->value) {
            i++;
        }
        list = list->next;
    }

    return i;
}
