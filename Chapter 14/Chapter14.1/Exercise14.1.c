#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SolveSphericalPolarCoordinates(float x, float y, float *r, float *theta)
{
    *r = sqrtf((x*x)+(y*y));
    *theta = atan2f(y, x);
}

int main (void)
{
    float X, Y, r, theta;

    printf("Please enter the coordinates x and y separated by a space\n");
    scanf("%f %f", &X, &Y);

    SolveSphericalPolarCoordinates(X, Y, &r, &theta);

    printf("The spherical polar coordinates are r = %f and theta = %f radians\n", r, theta);

    return 0;
}