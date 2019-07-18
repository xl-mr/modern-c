#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queueADT.h"

struct node {
    dataType data;
    struct node *next;
};

typedef struct node *Node;

struct queue_type {
    Node head;
    Node rear;
    int size;
};


queue create(void) {
    queue q = malloc(sizeof(struct queue_type));
    if (q == NULL) {
        return NULL;
    }
    q->head = NULL;
    q->rear = NULL;
    q->size = 0;

    return q;
}
void push(queue q, dataType e) {
    Node new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        return;
    }
    memset(new_node, 0, sizeof(struct node));
    new_node->data = e;
    if (q->head == NULL && q->rear == NULL) {
        q->head = q->rear = new_node;
    } else {
        q->rear->next = new_node;
        q->rear = new_node;
    }

    q->size++;
}
dataType pop(queue q)
{
    dataType e;   
    Node p;
    if (q->head == NULL && q->rear == NULL) {
        exit(0);
    }
    p = q->head;
    e = p->data;

    q->head = p->next;
    free(p);
    
    q->size--;
}

dataType getHead(queue q) 
{
    return q->head != NULL ? q->head->data : -1;
}

dataType getEnd(queue q)
{
    return q->rear != NULL ? q->rear->data : -1;
}

void destroy(queue q)
{
    Node p = q->head, s;
    if (q != NULL) {
        while (p != NULL) {
            s = p;
            p = p->next;
            free(s);
        }
        free(q);
    }
}

int length(queue q)
{
    return q != NULL ? q->size : 0;
}

void print_q(queue q)
{
    Node p = q->head;

    for (; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }

    printf("\n");
}
