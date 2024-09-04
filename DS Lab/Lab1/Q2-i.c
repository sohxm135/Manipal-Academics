#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort
void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int len;
    printf("Enter Array length: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter Array elements: \n");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    printArray(arr, len);

    bubbleSort(arr, len);

    printf("Sorted Array: ");
    printArray(arr, len);

    return 0;
}