#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declare some variables
    float r;
    float h;
    float pi = M_PI;

    // Use printf to prompt the user to enter the radius
    printf("Please enter the radius:\n");

    // Store input in value
    scanf("%f", &r);
    
    // Use scanf with %f to read into 'r' 
    if (r <= 0)
    {
        printf("Invalid input. Radius must be a positive number.\n");
        return 1;
    }

    // Use printf to prompt the user to enter the height
    printf("Please enter the height:\n");

    // Store input in value
    scanf("%f", &h);
    
    // Use scanf with %f to read into 'h' 
    if (h <= 0)
    {
        printf("Invalid input. Height must be a positive number.\n");
        return 1;
    }

    // Perform the calculation only if inputs are valid
    float a = 2 * pi * r * r + 2 * pi * r * h;

    // Use printf to display the result
    printf("The surface area of the cylinder is = %.3f m^2.\n", a);

    // Exit from main
    return 0;
}
