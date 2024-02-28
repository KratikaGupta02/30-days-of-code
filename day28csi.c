#include <stdio.h>
#include <string.h>

int romanToInt(char romanNum[]) {
    int values[26];
    values['I' - 'A'] = 1;
    values['V' - 'A'] = 5;
    values['X' - 'A'] = 10;
    values['L' - 'A'] = 50;
    values['C' - 'A'] = 100;
    values['D' - 'A'] = 500;
    values['M' - 'A'] = 1000;

    int result = 0;
    int prev = 0;

    for (int i = strlen(romanNum) - 1; i >= 0; i--) {
        int current = values[romanNum[i] - 'A'];
        if (current < prev) {
            result -= current;
        } else {
            result += current;
        }
        prev = current;
    }
    return result;
}

int main() {
    char romanNum[20];
    printf("Enter a Roman numeral: ");
    scanf("%s", romanNum);
    int integer = romanToInt(romanNum);
    printf("Equivalent integer: %d\n", integer);
    return 0;
}
