#include <stdio.h>

int main() {
    int size, target, count = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Enter the target element: ");
    scanf("%d", &target);
    
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            count++;
        }
    }
    
    printf("The number of occurrences of the target element is: %d\n", count);
    
    return 0;
}
