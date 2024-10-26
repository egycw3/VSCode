#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SolveDegreesToRadians(float theta_degrees, float *theta_radians, float *theta_sin, float *theta_cos, float *theta_tan)
{
    *theta_radians = theta_degrees*((float)M_PI)/180.0f;
    *theta_sin = sinf(*theta_radians);
    *theta_cos = cosf(*theta_radians);
    *theta_tan = tanf(*theta_radians);
}

int main (void)
{
    float Theta_Degrees, theta_radians, theta_sin, theta_cos, theta_tan;

    printf("Please enter the angle theta in degrees: \n");
    scanf("%f", &Theta_Degrees);

    SolveDegreesToRadians(Theta_Degrees, &theta_radians, &theta_sin, &theta_cos, &theta_tan);

    printf("The value of theta in radians = %f \n", theta_radians);
    printf("The value of sin theta = %f \n", theta_sin);
    printf("The value of cos theta = %f \n", theta_cos);
    printf("The value of tan theta = %f \n", theta_tan);

    return 0;
}