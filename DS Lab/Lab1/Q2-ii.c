#include <stdio.h>

void selectionSort(int arr[], int len) {
    int i, j, min_idx, temp;

    for (i = 0; i < len - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < len; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
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

    printf("Selection Sort\nEnter Array length: ");
    scanf("%d", &len);

    printf("Enter Array elements: \n");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: \n");
    printArray(arr, len);

    selectionSort(arr, len);

    printf("Sorted Array: \n");
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}