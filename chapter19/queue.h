#ifndef QUEUE_H
#define QUEUE_H

typedef int dataType;
typedef struct queue_type *queue;

void push(queue q, dataType e);
dataType pop(queue q);
dataType getHead(queue q);
dataType getEnd(queue q);

#endif
