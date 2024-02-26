#include <stdio.h>

int main() {
    int nums[100], target, n, i, j;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &target);
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("Indices: %d, %d\n", i, j);
                return 0;
            }
        }
    }
    
    printf("No solution found.\n");
    return 0;
}
