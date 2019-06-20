#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node *cur, *prev = NULL;

    cur = list;
    while (cur != NULL && new_node != NULL && cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
    }

    if (cur == NULL) {
        return new_node;
    }

    if (prev == NULL) {
        new_node->next = cur;
        list = new_node;
    } else {
        prev->next = new_node;
        new_node->next = cur;
    }

    return list;
}

int main(void)
{
    return 0;
}
