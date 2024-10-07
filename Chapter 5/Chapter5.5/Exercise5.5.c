#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declare some variables
    float r = 1;
    float pi = M_PI;
    float v = (4.0f*pi*r*r*r)/3.0f;
    float a = 4.0f*pi*r*r;

    // Use printf display text on the screen
    printf ("The volume of the sphere is %.2f.\nThe surface area of the sphere is = %.2f.", v, a);

    // Exit from main
    return 0;
}