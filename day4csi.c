
#include <stdio.h>

int main() {
    int num = 5;
    int factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is %d\n", num, factorial);

    return 0;
}
