#include <stdio.h>

void toggleCase(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert lowercase to uppercase
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // convert uppercase to lowercase
        }
    }
}

int main() {
    char str[100];

    printf("Hey, please enter a string: ");
    scanf("%[^\n]", str);

    toggleCase(str);

    printf("Here's your toggled case string: %s\n", str);

    return 0;
}
