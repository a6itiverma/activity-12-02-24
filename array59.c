#include <stdio.h>


void countingSort(int arr[], int n) {

    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }


    int count[max + 1];
    for (i = 0; i <= max; i++)
        count[i] = 0;


    for (i = 0; i < n; i++)
        count[arr[i]]++;


    for (i = 1; i <= max; i++)
        count[i] += count[i - 1];


    int output[n];


    for (i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }


    for (i = 0; i < n; i++)
        arr[i] = output[i];
}


void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {4, 14, 8, 0, 2, 5, 2, 1, 0, 17, 9, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The given array is: ");
    printArray(arr, n);

    countingSort(arr, n);

    printf("After sorting the elements in the array are: ");
    printArray(arr, n);

    return 0;
}
