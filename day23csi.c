#include <stdio.h>

int sumOfDigits(int num) {
    if(num == 0) {
        return 0;
    }
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num;
    printf("Hey, enter a positive integer: ");
    scanf("%d", &num);
    int sum = sumOfDigits(num);
    printf("The sum of digits of %d is %d.\n", num, sum);
    return 0;
}
