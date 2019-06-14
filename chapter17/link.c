#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *add_to_list(struct node *list, int n)
{
    struct node *new_node;

    new_node = (struct node *) malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Error: malloc failed in add to list\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;
    return new_node;
}

struct node *read_numbers(void)
{
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for (;;) {
        scanf("%d", &n);
        if (n == 0) {
            return first;
        }
        first = add_to_list(first, n);
    }
}

struct node *search_list(struct node *list, int n)
{
    for () {}
}

int main(void)
{

    return 0;
}


