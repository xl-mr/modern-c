#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define QUEUE_SIZE 100

struct queue_type {
    int data[QUEUE_SIZE];
    int insert_pos;
    int delete_pos;
    int size;
};

void push(queue q, dataType e)
{
    if ((q->insert_pos + 1) % QUEUE_SIZE == q->delete_pos) {
        fprintf(stderr, "queue is full.\n");
        return;
    }
    q->data[q->insert_pos] = e;
    q->insert_pos = (q->insert_pos + 1) % QUEUE_SIZE;
    q->size++;
}

dataType pop(queue q)
{
    if (q->insert_pos == q->delete_pos) {
        fprintf(stderr, "queue is empty.\n");
        exit(0);
    } else {
        dataType e = q->data[q->delete_pos];
        q->delete_pos = (q->delete_pos + 1) % QUEUE_SIZE;
        q->size--;

        return e;
    }
}

dataType getHead(queue q)
{
    if ((q->insert_pos + 1) % QUEUE_SIZE == q->delete_pos) {
        fprintf(stderr, "queue is full.\n");
        exit(0);
    }
    return q->data[q->delete_pos];
}

dataType getEnd(queue q)
{
    if ((q->insert_pos + 1) % QUEUE_SIZE == q->delete_pos) {
        fprintf(stderr, "queue is full.\n");
        exit(0);
    }
    return q->data[q->insert_pos];
}
