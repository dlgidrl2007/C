#include <stdio.h>
// 도수정렬
int max(int a[], int n) { // 최댓값 찾기
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}

int min(int a[], int n) { // 최솟값 찾기
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];

    return min;
}

void countingSort(int a[], int n) { // 횟수배열
    int maxval = max(a, n);
    int minval = min(a, n);
    int len = maxval-minval+1;

    int counter[len]; // count배열
    int temp[n]; // cumcount배열
    for (int _ = 0; _ < len; _++) counter[_] = 0; // 0 할당
    for (int i = 0; i < n; i++) counter[a[i] - minval]++; //횟수
    for (int j = 1; j < len; j++) counter[j] += counter[j-1]; //누적횟수
    for (int k = n-1; k >= 0; k--) temp[--counter[a[k] - minval]] = a[k];
    for (int _ = 0; _ < n; _++) a[_] = temp[_]; //a정렬
}

int main() {
    int arr[] = {5, 15, 7, 20, 1 ,
                 4, 10, 2, 8, 11,
                 10, 6, 13, 18, 3,
                 10, 12, 14, 17, 19};

    countingSort(arr, 20);
    for (int i = 0; i < 20; i++)
        printf("%d ", arr[i]);
}