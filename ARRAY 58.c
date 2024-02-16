#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int count = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int arr[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    moveZeroesToEnd(arr, n);

    printf("The new array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

