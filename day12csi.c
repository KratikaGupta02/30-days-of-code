#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int totalSum = (n * (n + 1)) / 2; // Calculate the sum of numbers from 0 to n
    int arraySum = 0; // Calculate the sum of elements in the array
    
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }
    
    int missingNumber = totalSum - arraySum;
    
    return missingNumber;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the numbers in the array:\n");
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    
    int missingNumber = findMissingNumber(arr, n);
    
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}
