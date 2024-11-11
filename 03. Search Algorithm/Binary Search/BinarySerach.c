#include <stdio.h>
// 이진탐색
int binary_search(int array[], int n, int key) {
    int left = 0;
    int right = n-1;
    int center;

    while (left <= right) {
        center = (left + right) / 2;

        if (array[center] == key)
            return center;

        else if (array[center] < key)
            left = center + 1;

        else
            right = center - 1;
    }

    return -1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    printf("%d\n", binary_search(a, 7, 5));
    printf("%d\n", binary_search(a, 7, 8));

    return 0;
}