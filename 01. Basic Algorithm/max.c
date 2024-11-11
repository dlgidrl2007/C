#include <stdio.h>
// 최댓값
int max(int array[], int n) {
    int max = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}

int main() {
    int a[] = {0, 1, -2, 5, 3, -7};
    printf("%d", max(a, 6));

    return 0;
}