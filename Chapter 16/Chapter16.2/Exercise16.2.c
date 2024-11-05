#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare an integer array and an integer pointer
    int arraySize;
    int *pData;

    // Prompt the user for the array size
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    // Allocate memory based on the user-defined array size
    pData = calloc((size_t)arraySize, sizeof(int));

    if (pData == NULL)
    {
        printf("\nMemory could not be allocated - terminating");
        return -1;  // Use -1 as we did not exit successfully
    }

    // Memory allocated successfully, make use of it here

    // Free up the allocated memory
    free(pData);

    return 0;  // Exit successfully
}