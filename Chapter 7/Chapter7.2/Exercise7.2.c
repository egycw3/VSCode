#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declare some variables
    float r;
    float pi = M_PI;

    // Use printf to prompt the use to enter the radius
    printf ("Please enter the radius:\n");
    
    // use scanf with %d to read into 'r' 
    scanf ("%f",&r);

    float v = (4.0f*pi*r*r*r)/3.0f;
    float a = 4.0f*pi*r*r;

    // Use printf display text on the screen
    printf ("The volume of the sphere is %f m^3.\nThe surface area of the sphere is = %f m^2.", v, a);

    // Exit from main
    return 0;
}