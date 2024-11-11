#include <stdio.h>
// 총합
int sum(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += array[i];

    return sum;
}

int main() {
    int a[] = {0, 1, -2, 5, 3, -7};
    printf("%d", sum(a, 6));

    return 0;
}