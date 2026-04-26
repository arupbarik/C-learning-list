#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    printArray(nums, 5);
    return 0;
}