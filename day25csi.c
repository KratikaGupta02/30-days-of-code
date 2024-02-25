#include <stdio.h>

int sumArray(int arr[], int size) {
    // Base case: if the array is empty, return 0
    if (size == 0) {
        return 0;
    }
    // Recursive case: add the first element to the sum of the rest of the array
    else {
        return arr[size - 1] + sumArray(arr, size - 1);
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sumArray(arr, size);
    printf("The sum of the elements in the array is: %d\n", sum);
    return 0;
}
