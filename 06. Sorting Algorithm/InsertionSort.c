#include <stdio.h>
// 삽입정렬 : 키값을 지정해서 앞의 숫자와 하나하나 비교하여 자리를 미뤄서 바꿈
void insertionSort(int a[], int n) {
    int i, j, key;

    for (i = 1; i < n; i++) {
        key = a[i];
        for (j = i-1; j >= 0 && a[j] > key; j--)
            a[j+1] = a[j];

        a[j+1] = key;
    }
}

int main() {
    int arr[] = {5, 15, 7, 20, 1 ,
                 4, 10, 2, 8, 11,
                 9, 6, 13, 18, 3,
                 16, 12, 14, 17, 19};

    insertionSort(arr, 20);

    for (int i = 0; i < 20; i++)
        printf("%d ", arr[i]);
}