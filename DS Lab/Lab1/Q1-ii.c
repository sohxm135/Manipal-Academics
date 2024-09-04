#include <stdio.h>

int BinarySearch(int n, int len, int arr[]) {
    int low = 0, high = len - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == n) return mid;
        else if (arr[mid] > n) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main() {
    int len, arr[100], n;
    printf("Enter Array length: ");
    scanf("%d", &len);
    printf("Enter Array elements in ascending order: \n");
    for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
    printf("\nEnter the number you would like to search:\n ");
    scanf("%d", &n);
    int result = BinarySearch(n, len, arr);
    if (result != -1) printf("Number found at index: %d\n", result);
    else printf("Number not found in the array\n");
    return 0;
}