#include <stdio.h>

void swap(int* a, int* b) {

    int t = *a;

    *a = *b;

    *b = t;

}

int partition(int arr[], int low, int high) {

    int pivot = arr[high];

    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {

        if (arr[j] < pivot) {

            i++;

            swap(&arr[i], &arr[j]);

        }

    }

    swap(&arr[i + 1], &arr[high]);

    return (i + 1);

}

void quicksort(int arr[], int low, int high) {

    if (low < high) {

        int pivotIndex = partition(arr, low, high);

        quicksort(arr, low, pivotIndex - 1);

        quicksort(arr, pivotIndex + 1, high);

    }

}

int main() {

    int arr[] = {3, 6, 8, 10, 1, 2, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    return 0;
    
}