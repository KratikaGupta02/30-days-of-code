#include <stdio.h>
#define MAX_SIZE 100

int findFirstNonRepeatingChar(char str[]) {
    int count[256] = {0};
    int i;

    for (i = 0; str[i]; i++) {
        count[str[i]]++;
    }

    for (i = 0; str[i]; i++) {
        if (count[str[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    char str[MAX_SIZE];
    int index;

    printf("Enter a string: ");
    scanf("%s", str);

    index = findFirstNonRepeatingChar(str);

    if (index == -1) {
        printf("There is no non-repeating character in the string.\n");
    } else {
        printf("The first non-repeating character is '%c' at index %d.\n", str[index], index);
    }

    return 0;
}
