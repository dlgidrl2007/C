#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// ArrayQueue
void aq_init(arrayQueue *q, int max) {
    q->max = max;
    q->ptr = 0;
    q->data = calloc(max, sizeof(int));
}

void aq_enque(arrayQueue *q, int x) {
    q->data[q->ptr++] = x;
}

int aq_deque(arrayQueue *q) {
    int result = q->data[0];
    for(int i = 1; i < q->ptr; i++)
        q->data[i-1] = q->data[i];
    q->ptr--;

    return result;
}

int aq_peek(const arrayQueue *q) {
    return q->data[0];
}

void aq_clear(arrayQueue *q) {
    q->ptr = 0;
}

int aq_capacity(const arrayQueue *q) { // max length
    return q->max;
}

int aq_size(const arrayQueue *q) { // current length
    return q->ptr;
}

int aq_search(const arrayQueue *q, int x) {
    for (int i = 0; i < q->ptr; i++)
        if (q->data[i] == x)
            return i;

    return -1;
}

void aq_printQueue(const arrayQueue *q) {
    printf("{ ");
    for (int i = 0; i < q->ptr; i++) {
        printf("%d", q->data[i]);
        if (i < q->ptr - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

void aq_terminate(arrayQueue *q) {
    free(q->data);
    q->max = q->ptr = 0;
}


// CircularQueue
void cq_init(circularQueue *q, int max) {
    q->max = max;
    q->ptr = q->front = q->rear = 0;
    q->data = calloc(max, sizeof(int));
}

void cq_enque(circularQueue *q, int x) {
    q->ptr++;
    q->data[q->rear++] = x;

    if (q->rear == q->max)
        q->rear = 0;
}

int cq_deque(circularQueue *q) {
    q->ptr--;
    int result = q->data[q->front++];
    if (q->front == q->max)
        q->front = 0;

    return result;
}

int cq_peek(const circularQueue *q) {
    return q->data[q->front];
}

void cq_clear(circularQueue *q) {
    q->ptr = q->front = q->rear = 0;
}

int cq_capacity(const circularQueue *q) {
    return q->max;
}

int cq_size(const circularQueue *q) {
    return q->ptr;
}

int cq_search(const circularQueue *q, int x) {
    for (int i = 0; i < q->ptr; i++) {
        int idx = (i+q->front) % q->max;
        if (q->data[idx] == x)
            return i;
    }
    return -1;
}

void cq_printQueue(const circularQueue *q) {
    printf("{ ");
    for (int i = 0; i < q->ptr; i++) {
        printf("%d", q->data[(i + q->front) % q->max]);
        if (i < q->ptr - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

void cq_terminate(circularQueue *q) {
    free(q->data);
    q->max = q->front = q->rear = 0;
}