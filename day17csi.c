#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str, char selectedNum) {
    int len = strlen(str);
    int index = 0;
  
    for (int i = 0; i < len; i++) {
        if (str[i] != selectedNum) {
            str[index++] = str[i];
        }
    }
  
    str[index] = '\0';
}

int main() {
    char str[100];
    char selectedNum;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the number you want to select: ");
    scanf(" %c", &selectedNum);

    removeDuplicates(str, selectedNum);

    printf("Resulting string after removing duplicates: %s\n", str);

    return 0;
}
