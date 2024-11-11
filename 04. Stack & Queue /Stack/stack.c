#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void init(stack *s, int max) {
    s->init_max = s->max = max; // 매개변수 max를 배열 길이로 설정
    s->ptr = 0; // 포인터 0 인덱스로 설정
    s->data = calloc(max, sizeof(int)); // 메모리 할당
}

void push(stack *s, int x) {
    if (s->ptr >= s->max) // ptr이 배열의 인덱스를 초과했을 때
        s->data = realloc(s->data, (++s->max)*sizeof(int)); // 메모리 재할당
    s->data[s->ptr++] = x;
}

int pop(stack *s) { // 가장 마지막 값 삭제 및 반환
    return s->data[--s->ptr];
}

int peek(const stack *s) { // 가장 마지막 값이 무엇인지 확인
    return s->data[s->ptr-1]; // 확인만 하기 때문에 ptr을 움직이기 않음
}

void clear(stack *s) { // s 초기화
    s->ptr = 0;
    s->max = s->init_max;
}

int capacity(const stack *s) {

}