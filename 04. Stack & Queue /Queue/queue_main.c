#include <stdio.h>
#include "queue.h"

int main() {
    // arrayQueue
    arrayQueue q1;

    printf("<ArrayQueue>\n");
    aq_init(&q1, 20); // Initialize arrayQueue

    for (int i = 1; i <= 10; i++)
        aq_enque(&q1, i);

    printf("Initial ArrayQueue : ");
    aq_printQueue(&q1);
    printf("size: %d\tmax size: %d\n", aq_size(&q1), aq_capacity(&q1));
    printf("\n");


    printf("Peek : %d\n", aq_peek(&q1)); // Return last element
    printf("Pop : %d\n", aq_deque(&q1)); // Last element -> 10, Delete last element
    printf("\n");
    printf("Peek : %d\n", aq_peek(&q1));
    aq_deque(&q1); // Delete Last element(9)

    aq_printQueue(&q1);
    printf("size: %d\tmax size: %d\n", aq_size(&q1), aq_capacity(&q1));
    printf("\n");

    printf("Search (7) : %d\n", aq_search(&q1, 7));
    printf("Search (0) : %d\n", aq_search(&q1, 0));
    printf("\n");

    aq_clear(&q1);

    aq_clear(&q1);
    printf("Clear : ");
    aq_printQueue(&q1);
    printf("size: %d\tmax size: %d\n", aq_size(&q1), aq_capacity(&q1));

    printf("\n");

    // CircularQueue
    circularQueue q2;

    printf("<CircularQueue>\n");
    cq_init(&q2, 20); // Initialize CircularQueue

    for (int i = 1; i <= 10; i++)
        cq_enque(&q2, i);

    printf("Initial CircularQueue : ");
    cq_printQueue(&q2);
    printf("size: %d\tmax size: %d\n", cq_size(&q2), cq_capacity(&q2));
    printf("\n");

    printf("Peek : %d\n", cq_peek(&q2)); // Return last element
    printf("Pop : %d\n", cq_deque(&q2)); // Last element -> 10, Delete last element
    printf("\n");
    printf("Peek : %d\n", cq_peek(&q2));
    cq_deque(&q2); // Delete Last element(9)

    cq_printQueue(&q2);
    printf("size: %d\tmax size: %d\n", cq_size(&q2), cq_capacity(&q2));
    printf("\n");

    printf("Search (7) : %d\n", cq_search(&q2, 7));
    printf("Search (0) : %d\n", cq_search(&q2, 0));
    printf("\n");

    cq_clear(&q2);

    printf("Clear : ");
    cq_printQueue(&q2);
    printf("size: %d\tmax size: %d\n", cq_size(&q2), cq_capacity(&q2));
    printf("\n");

    return 0;
}