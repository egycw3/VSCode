#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SolveDegreesToRadians(int theta_degrees, float *theta_radians, float *theta_sin, float *theta_cos, float *theta_tan)
{
    *theta_radians = (float)theta_degrees*((float)M_PI)/180.0f;
    *theta_sin = sinf(*theta_radians);
    *theta_cos = cosf(*theta_radians);
    *theta_tan = tanf(*theta_radians);
}

int main (void)
{
    int start_value, end_value;

    printf("Please enter two integer values: \n");
    scanf("%d %d", &start_value, &end_value);

    printf("Degs    Rad    sin    cos    tan\n");

    // Loop from start_value to end_value
    for (int i = start_value; i <= end_value; i++)
    {
        float theta_radians, theta_sin, theta_cos, theta_tan;

        // Calculate values using the function
        SolveDegreesToRadians(i, &theta_radians, &theta_sin, &theta_cos, &theta_tan);

        // Print the values formatted to three decimal points
        printf("%3d %6.3f %6.3f %6.3f %6.3f\n", i, theta_radians, theta_sin, theta_cos, theta_tan);
    }

    return 0;
}