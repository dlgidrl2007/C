#include <stdio.h>
// 재귀함수 사용
int binary_search(int array[], int left, int right, int key) {
    if (left <= right) {
        int center = (left + right) / 2;

        if (array[center] == key)
            return center;

        else if (array[center] > key)
            return binary_search(array, left, center-1, key);

        else
            return binary_search(array, center+1, right, key);
    }

    return -1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    printf("%d\n", binary_search(a, 0, 6, 5));
    printf("%d\n", binary_search(a, 0, 6, 8));

    return 0;
}