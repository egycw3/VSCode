#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define the function to convert degress to radians
float CalculateDegreesToRadians(float D)
{
	// Calculate  \& return value
	float Result;
	Result = (M_PI * D)/180.0;
	return (Result);
}

int main(void)
{
    // Declare variables
    float d, r;

    // Obtain values
    printf("\nPlease enter the value in degrees: ");
    scanf("%f", &d);

    // Get the radians value and display it
    r = CalculateDegreesToRadians(d);
    printf ("\nThe value in radians is %f.\n", r);

    return 0;
}