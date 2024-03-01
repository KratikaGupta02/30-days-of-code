#include <stdio.h>

int main() {
    char name[100];
    char message[1000];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter a brief message about your experience: ");
    scanf(" %[^\n]s", message);

    printf("\nThank you, %s, for sharing your experience!\n\n", name);
    printf("Here's your message: %s\n", message);
    printf("Keep up the great work and continue learning!\n");

    return 0;
}
