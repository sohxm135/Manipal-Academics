#include <stdio.h>


void insertionSort(int arr[], int len) {
    int i, j, key;

    for (i = 1; i < len; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int len, arr[100];

    printf("Insertion Sort\nEnter Array length: ");
    scanf("%d", &len);

    printf("Enter Array elements: \n");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: \n");
    printArray(arr, len);

    insertionSort(arr, len);

    printf("Sorted Array: \n");
    printArray(arr, len);

    return 0;
}