#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidParentheses(char* s) {
    int len = strlen(s);
    int stack[len];
    int top = -1;

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            stack[++top] = '(';
        } else if (s[i] == ')') {
            if (top == -1 || stack[top] != '(') {
                return false;
            }
            top--;
        }
    }

    return top == -1;
}

int main() {
    char parentheses[100];
    printf("Enter a string of parentheses: ");
    scanf("%s", parentheses);

    if (isValidParentheses(parentheses)) {
        printf("The string of parentheses is valid!\n");
    } else {
        printf("The string of parentheses is not valid.\n");
    }

    return 0;
}
