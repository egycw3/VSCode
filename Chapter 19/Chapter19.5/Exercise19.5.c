#include <stdio.h>
#include <stdlib.h>

// Simple function to populate an integer array
void PopulateTheArray(int Size, int ArrayData[])
{
    for (int i = 0; i < Size; i++) {
        ArrayData[i] = 2 * i + 1; // Treat it like a normal array
    }
}

// Simple function to display contents of an integer array
void DisplayTheArray(int Size, int ArrayData[])
{
    for (int i = 0; i < Size; i++) {
        printf("Item %d of the array contains %d\n", i, ArrayData[i]);
    }
}

// Function to write contents of an integer array to a text file
void WriteArrayToFile(int Size, int ArrayData[], const char *fileName)
{
    FILE *file = fopen(fileName, "w"); // Open the file in write mode
    if (file == NULL) {                
        printf("Error: Could not open file %s for writing.\n", fileName);
        return;
    }
    for (int i = 0; i < Size; i++) {
        fprintf(file, "Item %d of the array contains %d\n", i, ArrayData[i]);
    }
    fclose(file); // Close the file
    printf("Array data has been written to %s successfully.\n", fileName);
}

// Function to write contents of an integer array to a binary file
void WriteArrayToBinaryFile(int Size, int ArrayData[], const char *fileName)
{
    FILE *file = fopen(fileName, "wb"); // Open the file in binary write mode
    if (file == NULL) {
        printf("Error: Could not open file %s for writing.\n", fileName);
        return;
    }
    fwrite(ArrayData, sizeof(int), (size_t)Size, file); // Write entire array
    fclose(file); // Close the file
    printf("Array data has been written to binary file %s successfully.\n", fileName);
}

// Main function - execution starts here
int main(void)
{
    int iSizeForArray;
    int *pData;

    // Ask for the size of the array and store result
    printf("\nPlease enter the size of the array to dynamically allocate: ");
    scanf("%d", &iSizeForArray);

    // Use calloc with checking
    pData = calloc((size_t)iSizeForArray, sizeof(int));

    // Check we got the memory
    if (pData == NULL) {
        printf("\nSorry, I could not allocate the memory, bye!");
        return -1;
    }

    // Populate and display the array
    PopulateTheArray(iSizeForArray, pData);
    DisplayTheArray(iSizeForArray, pData);

    // Prompt for the file name and write to text and binary files
    char fileName[100];
    printf("\nPlease enter the name of the text file to write the array data: ");
    scanf("%s", fileName);
    WriteArrayToFile(iSizeForArray, pData, fileName);

    printf("\nPlease enter the name of the binary file to write the array data: ");
    scanf("%s", fileName);
    WriteArrayToBinaryFile(iSizeForArray, pData, fileName);

    // Free up the memory before exiting
    free(pData);

    return 0; // Exit indicating success
}