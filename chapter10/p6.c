#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variable */
int stack[STACK_SIZE] = {0};
int top = 0;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int e)
{
    if (is_full()) {
        printf("stack overflow.\n");
        exit(EXIT_FAILURE);
    } else {
        stack[top++] = e;
    }
}

int pop(void)
{
    int e;
    if (is_empty()) {
        printf("stack underflow.\n");
        exit(EXIT_FAILURE);
    } else {
        e = stack[--top];
        stack[top] = 0;
        return e;
    }
}
    
int main(void)
{
    char c;

   return 0;
}
