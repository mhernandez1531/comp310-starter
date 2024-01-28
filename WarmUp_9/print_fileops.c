#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        perror("Error opening the file");
        return 1;
    }

    fprintf(file, "Hello, World");

    fclose(file);
    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening the file");
        return 1; 
    }

    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}