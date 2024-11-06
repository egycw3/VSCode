#include <stdio.h>
#include <stdlib.h>

// Function to read contents of an integer array from a binary file
int* ReadArrayFromBinaryFile(const char *fileName, size_t *arraySize)
{
    FILE *file = fopen(fileName, "rb"); // Open the file in binary read mode
    if (file == NULL) {
        printf("Error: Could not open file %s for reading.\n", fileName);
        return NULL;
    }

    // Determine the size of the file
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET); // Reset file pointer to the beginning

    // Calculate the number of integers and cast fileSize to size_t
    *arraySize = (size_t)fileSize / sizeof(int);

    // Allocate memory for the array using *arraySize as size_t
    int *ArrayData = (int*)calloc(*arraySize, sizeof(int));
    if (ArrayData == NULL) {
        printf("Error: Could not allocate memory for reading array.\n");
        fclose(file);
        return NULL;
    }

    // Read data into the array
    fread(ArrayData, sizeof(int), *arraySize, file);
    fclose(file); // Close the file

    printf("Array data has been read from binary file %s successfully.\n", fileName);
    return ArrayData;
}

// Main function - execution starts here
int main(void)
{
    char fileName[100];
    size_t arraySize;
    int *pData;

    // Prompt for the binary file name
    printf("Please enter the name of the binary file to read the array data: ");
    scanf("%s", fileName);

    // Read the array from the binary file
    pData = ReadArrayFromBinaryFile(fileName, &arraySize);

    // Check if the array was read successfully
    if (pData != NULL) {
        printf("The array contains %zu elements:\n", arraySize);
        for (size_t i = 0; i < arraySize; i++) {
            printf("Item %zu of the array contains %d\n", i, pData[i]);
        }
        free(pData); // Free the dynamically allocated memory
    }

    return 0; // Exit indicating success
}