#ifndef STACK_H
#define STACK_H

typedef struct stack {
    int init_max; // 배열의 초기 길이
    int max; // 배열의 길이
    int ptr; // 배열에서 다음에 수정할 인덱스를 가리키는 포인터
    int *data; // stack 배열을 가리키는 포인터로, 배열 그 자체
} stack;

void init(stack *s, int max);
void push(stack *s, int x);
int pop(stack *s);
int peek(const stack *s);
void clear(stack *s);
int capacity(const stack *s);
int size(const stack *s);
int search(const stack *s, int x);
void printStack(const stack *s);
void terminate(stack *s);

#endif