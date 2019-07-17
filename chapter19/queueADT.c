#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

#define QUEUE_SIZE 100


struct queue_type {
    int data[QUEUE_SIZE];
    int head_pos;
    int rear_pos;
    int size;
};


queue create(void) {
    queue q = malloc(sizeof(struct queue_type));
    if (q == NULL) {
        return NULL;
    }
    q->head_pos = 0;
    q->rear_pos = 0;
    q->size = 0;

    return q;
}
void push(queue q, dataType e) {
    if ((q->rear_pos + 1) % QUEUE_SIZE == q->head_pos) {
        return;
    }
    q->data[q->rear_pos] = e;
    q->rear_pos = (q->rear_pos + 1) % QUEUE_SIZE;
    q->size++;
}
dataType pop(queue q)
{
    dataType e;   
    if (q->rear_pos == q->head_pos) {
        exit(0);
    }
    e = q->data[q->head_pos];
    q->head_pos = (q->head_pos + 1) % QUEUE_SIZE;
    q->size--;
}

dataType getHead(queue q) 
{
    return q->data[q->head_pos];
}

dataType getEnd(queue q)
{
    return q->data[q->rear_pos];
}

void destroy(queue q)
{
    if (q != NULL) {
        free(q);
    }
}
