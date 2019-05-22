#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

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

void read_expr(void) {
    int i, j;
    char ch;
    
    i = 0;
    do {
        if (i == 0) {
            printf("Enter an RPN expression:");
        }
        i++;
        scanf(" %c", &ch);       

        for (j = 0; j < STACK_SIZE; j++) {
            if (stack[j] != 0) {
                printf("%d ", stack[j]);
            }
        }
        printf("\n");
        
        if (ch >= '0' && ch <= '9') {
            push(ch - '0');
        } else if (ch == '*' ) {                
            push(pop() * pop());
        } else if (ch == '=') {
            i = 0;
            printf("value of expression: %d\n", pop());
        } else if (ch == '/') {
            push(pop() / pop());
        } else if (ch == '+') {
            push(pop() + pop());
        } else if (ch == '-') {
            push(pop() - pop());
        }
    } while (ch != 'q');   
}
    
int main(void)
{
    read_expr();

    return 0;
}
