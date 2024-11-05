#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arraySize;  // Variable to store the user-defined array size
    int *pData;     // Pointer to the integer array

    // Prompt the user for the array size
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    // Check if the entered size is valid
    if (arraySize <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return -1;
    }

    // Allocate memory based on the user-defined array size, casting arraySize to size_t
    pData = calloc((size_t)arraySize, sizeof(int));

    if (pData == NULL) {
        printf("\nMemory could not be allocated - terminating");
        return -1;  // Use -1 as we did not exit successfully
    }

    // Populate the array and display each value
    for (int i = 0; i < arraySize; i++) {
        pData[i] = i;  // Set the array element at index i to the value of i
        printf("Index %d, Value %d\n", i, pData[i]);  // Display index and stored value
    }

    // Free up the allocated memory
    free(pData);

    return 0;  // Exit successfully
}