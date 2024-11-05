#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to populate a float array with loop variable values in radians
void PopulateTheArray(int size, float arrayData[])
{
    for (int i = 0; i < size; i++)
    {
        arrayData[i] = (float)i * ((float)M_PI / 180.0f); // Convert i to radians (i degrees * pi/180)
    }
}

// Function to display the contents of a float array with 3 decimal places
void DisplayTheArray(int size, float arrayData[])
{
    for (int i = 0; i < size; i++)
    {
        printf("Item %d of the array contains %.3f radians\n", i, arrayData[i]);
    }
}

// Main function - execution starts here
int main(void)
{
    int iSizeForArray;    // Variable to store the array size
    float *pData;         // Pointer to hold the base address of the float array

    // Ask for the size of the array and store the result
    printf("Please enter the size of the array to dynamically allocate: ");
    scanf("%d", &iSizeForArray);

    // Check for a valid array size
    if (iSizeForArray <= 0)
    {
        printf("Invalid array size. Please enter a positive integer.\n");
        return -1;
    }

    // Use calloc to allocate memory for the float array
    pData = calloc((size_t)iSizeForArray, sizeof(float));

    // Check if memory allocation was successful
    if (pData == NULL)
    {
        printf("Memory allocation failed. Exiting program.\n");
        return -1;
    }

    // Populate and display the array
    PopulateTheArray(iSizeForArray, pData);
    DisplayTheArray(iSizeForArray, pData);

    // Free the allocated memory
    free(pData);

    return 0; // Exit indicating success
}