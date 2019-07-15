#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct node {
    dataType e;
    struct node *next;
};

struct queue_type {
    struct node *head;   
    struct node *rear;   
    int size;
};

void push(queue q, dataType e);
dataType pop(queue q);
dataType getHead(queue q);
dataType getEnd(queue q);
