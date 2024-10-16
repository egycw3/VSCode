#include <stdio.h>
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
    int lower, upper; // Declare variables for lower and upper values

    // Prompt the user to enter the lower and upper values
    printf("Enter the lower value: ");
    scanf("%d", &lower);
    printf("Enter the upper value: ");
    scanf("%d", &upper);

    // Validate that the lower value is less than the upper value
    while (lower >= upper)
    {
        printf("Invalid input. The lower value must be less than the upper value.\n");
        printf("Enter the lower value: ");
        scanf("%d", &lower);
        printf("Enter the upper value: ");
        scanf("%d", &upper);
    }

    // Loop to count from lower to upper inclusive
    for (int i = lower; i <= upper; i++)
    {
        // Calculate the square of the current counter value
        float radians = CalculateDegreesToRadians(i); // Use multiplication to calculate the square
        
        // Print the current counter value and its square on a new line
        printf("%d degrees = %f radians\n", i, radians);
    }

    return 0; // Exit code
}