#ifndef QUEUE_H
#define QUEUE_H

typedef int dataType;
typedef struct queue_type *queue;

queue create(void);
void push(queue q, dataType e);
dataType pop(queue q);
dataType getHead(queue q);
dataType getEnd(queue q);
void destroy(queue q);
int length(queue q);
void print_q(queue q);

#endif
