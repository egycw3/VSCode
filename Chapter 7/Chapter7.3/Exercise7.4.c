#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declare some variables
    float r;
    float h;
    float pi = M_PI;

    // Use printf to prompt the use to enter the radius
    printf ("Please enter the radius:\n");
    
    // use scanf with %f to read into 'r' 
    scanf ("%f",&r);

    // Use printf to prompt the use to enter the height
    printf ("Please enter the height:\n");
    
    // use scanf with %f to read into 'h' 
    scanf ("%f",&h);

    float a = 2*pi*r*r + 2*pi*r*h;

    // Use printf display text on the screen
    printf ("The surface area of the cylinder is = %.3f m^2.", a);

    // Exit from main
    return 0;
}