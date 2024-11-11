#include <stdio.h>
// for문 사용
int linear_search(int array[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (array[i] == key)
            return i;
    }

    return -1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    printf("%d\n", linear_search(a, 7, 5));
    printf("%d\n", linear_search(a, 7, 8));

    return 0;
}