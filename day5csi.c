#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, nextTerm, i;

    printf("The first 10 numbers of the Fibonacci sequence are: ");

    for (i = 1; i <= 10; ++i) {
        printf("%d ", n1);
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }

    return 0;
}
