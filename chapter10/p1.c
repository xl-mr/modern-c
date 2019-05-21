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
    int ch, symbol;
    int i;

    printf("Enter parentess and/or braces: ");
    
    while ((ch = getchar()) != '\n') {
        //printf("%c", ch);
        switch (ch) {
            case '(':
            case '{':
                if (is_full()) {
                    printf("parenteses/braces aren't nested properly.\n");
                    exit(EXIT_FAILURE);
                }
                push(ch);
                break;
            case ')':
                if (is_empty()) {
                    printf("parenteses/braces aren't nested properly.\n");
                    exit(EXIT_FAILURE);
                }
                symbol = pop();
                if (symbol != '(') {
                    printf("parenteses/braces aren't nested properly.\n");
                    exit(EXIT_FAILURE);
                }
                break;
            case '}':
                if (is_empty()) {
                    printf("parenteses/braces aren't nested properly.\n");
                    exit(EXIT_FAILURE);
                }
                symbol = pop();
                if (symbol != '{') {
                    printf("parenteses/braces aren't nested properly.\n");
                    exit(EXIT_FAILURE);
                }
                break;
            default:
                break;
        }
    }

    if (top == 0) {
        printf("parenteses/braces are nested properly.\n");
    } else {
        printf("parenteses/braces aren't nested properly.\n");
    }

    for (i = 0; i < STACK_SIZE; i++) {
        if (stack[i] != 0) {
            printf("i = %d, c = %c || ", i, stack[i]);
        }
    }
    printf("\n");

    return 0;
}
