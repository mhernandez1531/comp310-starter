#include <stdio.h>
#include <stdlib.h>

void StringReversal(char str[], int length) {
    for (int i = 0, j = length - 1; i < j; ++i, --j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Hello";
    int length = sizeof(str) - 1;

    printf("Original: %s\n", str);
    StringReversal(str, length);
    printf("Reversed: %s\n", str);

    return 0;
}