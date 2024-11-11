#include <stdio.h>
// 보초법
int linear_search(int array[], int n, int key) {
    array[n] = key;
    int i = 0;

    while (1) {
        if (array[i] == key)
            break;

        i++;
    }

    if (i == n)
        return -1;

    return i;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};

    printf("%d\n", linear_search(a, 7, 5));
    printf("%d\n", linear_search(a, 7, 8));

    return 0;
}