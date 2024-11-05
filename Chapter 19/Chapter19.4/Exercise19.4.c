#include <stdio.h>
#include <stdlib.h>

// Simple function to populate an integer array
void PopulateTheArray ( int Size, int ArrayData[])
{
    int i;      // Variable to use in our loop

    for ( i = 0 ; i < Size ; i++)
    {
        ArrayData[i] = 2*i + 1; // Treat it like a normal array
    }
}

// Simple function do display contents an integer array
void DisplayTheArray ( int Size, int ArrayData[])
{
    int i;      // Variable to use in our loop

    for ( i = 0 ; i < Size ; i++)
    {
        printf ("Item %d of the array contains %d\n", i, ArrayData[i]);
    }
}

// Function to write contents of an integer array to a file
void WriteArrayToFile(int Size, int ArrayData[], const char *fileName) 
{
    FILE *file = fopen(fileName, "w"); // Open the file in write mode
    if (file == NULL) // Check if the file was opened successfully
    {                
        printf("Error: Could not open file %s for writing.\n", fileName);
        return;
    }
    for (int i = 0; i < Size; i++) 
    {
        fprintf(file, "Item %d of the array contains %d\n", i, ArrayData[i]);
    }

    fclose(file); // Close the file
    printf("Array data has been written to %s successfully.\n", fileName);
}

// Main () - execution starts here
int main (void)
{

    int iSizeForArray;
    int *pData;              // A pointer to hold the base address of out array

    // Ask for the size of the array and store result

    printf("\nPlease enter the size of the array to dynamically allocate: ");
    scanf ("%d", &iSizeForArray);

    // Use calloc with checking
    pData = calloc((size_t)iSizeForArray, sizeof(int));

    // Check we got the memory
    if ( pData == NULL)
    {
        printf ("\nSorry, I could not allocate the memory, bye!");
        return -1;
    }

    // Pass the size, iSizeForArray) and the pointer created 
    // which points to the start of the sucesfully allocated memory

    PopulateTheArray(iSizeForArray, pData);
    DisplayTheArray(iSizeForArray, pData);

    free (pData);	    // Free up the memory before exiting

    return (0);     // Exit indicating sucess
}