
#include <stdio.h>
#include <string.h>

int longestSubstring(char *str) {
    int n = strlen(str);
    int visited[256];
    memset(visited, -1, sizeof(visited));
    int maxLength = 0, currentLength = 0, start = 0;

    for (int i = 0; i < n; i++) {
        if (visited[str[i]] != -1 && visited[str[i]] >= start) {
            start = visited[str[i]] + 1;
            currentLength = i - start;
        }
        visited[str[i]] = i;
        currentLength++;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    return maxLength;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = longestSubstring(str);
    printf("Length of the longest substring without repeating characters: %d\n", length);
    return 0;
}
