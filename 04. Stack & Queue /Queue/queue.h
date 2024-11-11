#ifndef QUEUE_H
#define QUEUE_H

typedef struct arrayQueue {
    int max;
    int ptr;
    int *data;
} arrayQueue;

void aq_init(arrayQueue *q, int max);
void aq_enque(arrayQueue *q, int x);
int aq_deque(arrayQueue *q);
int aq_peek(const arrayQueue *q);
void aq_clear(arrayQueue *q);
int aq_capacity(const arrayQueue *q);
int aq_size(const arrayQueue *q);
int aq_search(const arrayQueue *q, int x);
void aq_printQueue(const arrayQueue *q);
void aq_terminate(arrayQueue *q);

typedef struct circularQueue {
    int max;
    int ptr;
    int front;
    int rear;
    int *data;
} circularQueue;

void cq_init(circularQueue *q, int max);
void cq_enque(circularQueue *q, int x);
int cq_deque(circularQueue *q);
int cq_peek(const circularQueue *q);
void cq_clear(circularQueue *q);
int cq_capacity(const circularQueue *q);
int cq_size(const circularQueue *q);
int cq_search(const circularQueue *q, int x);
void cq_printQueue(const circularQueue *q);
void cq_terminate(circularQueue *q);

#endif