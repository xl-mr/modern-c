#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node {
    int data;
    struct node *next;
};

static struct node *top = NULL;

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    while (!is_empty())  {
        pop();
    }
}

bool is_empty(void)
{
    return top == NULL;
}

bool is_full(void)
{
    return false;
}

void push(int i)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        terminate("Error in push: stack is full.");
    }
    new_node->data = i;
    new_node->next = new_node;
    top = new_node;
}

int pop(void)
{
    int i;
    struct node *old_top;
    if (is_empty()) {
        terminate("Error in pop: stack is empty.");
    }

    old_top = top;
    i = top->data;
    top = top->next;
    free(old_top);

    return i;
}


