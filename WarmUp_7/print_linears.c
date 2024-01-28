#include <stdio.h>
#include <stdlib.h>

int linearSearch(int array[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if (array[i] == target) {
            return 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 4, 7, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int index = linearSearch(arr, size, target);

    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
    }
