#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define the function to convert degrees to radians
double CalculateDegreesToRadians(double I)
{
    // Calculate and return value
    double Result;
    Result = (M_PI * I) / 180.0; // Use M_PI as double
    return Result;
}

int main(void) // Main: Execution starts here...
{
    // Declare a double array to store radians
    double Number[90];  // Use double for precision
    int i;  // Use int for array indexing

    // Loop from 0 to 89 inclusive
    for (i = 0; i < 90; i++)
    {
        Number[i] = CalculateDegreesToRadians((double)i); // Pass i as double to the function
    }

    // Loop to print the contents of the array
    for (i = 0; i < 90; i++)
    {
        printf("Item %d contains value %.4f radians\n", i, Number[i]); // Print the index and value
    }

    // Exit the application
    return 0; // Return successful exit code
}