#include <stdio.h>
#include "stack.h"

int main() {
    // Stack
    stack s;

    init(&s, 20); // Initialize stack

    for (int i = 1; i <= 10; i++)
        push(&s, i);

    printf("Initial Stack : ");
    printStack(&s);
    printf("size: %d\tmax size: %d\n", size(&s), capacity(&s));
    printf("\n");


    printf("Peek : %d\n", peek(&s)); // Return last element
    printf("Pop : %d\n", pop(&s)); // Last element -> 10, Delete last element
    printf("\n");
    printf("Peek : %d\n", peek(&s));
    pop(&s); // Delete Last element(9)

    printStack(&s);
    printf("size: %d\tmax size: %d\n", size(&s), capacity(&s));
    printf("\n");


    clear(&s);

    printf("Clear : ");
    printStack(&s);
    printf("size: %d\tmax size: %d\n", size(&s), capacity(&s));
    printf("\n");


    for (int i = 1; i <= 21; i++)
        push(&s, i);

    printf("Extend : ");
    printStack(&s);
    printf("size: %d\tmax size: %d\n", size(&s), capacity(&s));
    printf("\n");

    printf("Search (17) : %d\n", search(&s, 17));
    printf("Search (0) : %d\n", search(&s, 0));
    printf("\n");

    clear(&s);
    printf("Clear : ");
    printStack(&s);
    printf("size: %d\tmax size: %d\n", size(&s), capacity(&s));

    return 0;
}