#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define HOW the function is to be used, code comes later
float CalculateSurfaceAreaOfCylinder(float R, float L);

// Function to calculate the volume of a cylinder
float CalculateVolumneOfCylinder(float R, float L)
{
    // Debug message for entering function
    #ifdef DEBUG_FNS
    printf("Function CalculateVolumneOfCylinder started\n");
    #endif

    // Calculate & return value
    float Result;
    Result = (M_PI * R * R * L);

    // Debug message for ending function
    #ifdef DEBUG_FNS
    printf("Function CalculateVolumneOfCylinder ended\n");
    #endif

    return (Result);
}

int main(void)
{
    // Debug message for entering main function
    #ifdef DEBUG_MAIN
    printf("Program Started\n");
    #endif

    // Declare variables
    float r, l, SurfaceArea, Volume;

    // Obtain values
    printf("\nPlease enter the radius");
    scanf("%f", &r);

    printf("\nPlease enter the length");
    scanf("%f", &l);

    // Get and display the volume
    Volume = CalculateVolumneOfCylinder(r, l);
    printf("\nThe volume is %f", Volume);

    // Get and display the surface area
    SurfaceArea = CalculateSurfaceAreaOfCylinder(r, l);
    printf("\nThe surface area is %f", SurfaceArea);

    // Debug message for ending main function
    #ifdef DEBUG_MAIN
    printf("Program Ending\n");
    #endif

    return 0;
}

// Calculate the surface areas of a cylinder
float CalculateSurfaceAreaOfCylinder(float R, float L)
{
    // Debug message for entering function
    #ifdef DEBUG_FNS
    printf("Function CalculateSurfaceAreaOfCylinder started\n");
    #endif

    // Calculate & return value
    float Result = (2 * M_PI * R * R) + (2 * M_PI * R * L);

    // Debug message for ending function
    #ifdef DEBUG_FNS
    printf("Function CalculateSurfaceAreaOfCylinder ended\n");
    #endif

    return Result;
}