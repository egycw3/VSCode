#include <stdio.h>

int main(void)
{
    int lower, upper; // Declare variables for lower and upper values
    int sum = 0; // Variable to hold the running sum

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
        sum += i; // Add the current value to the running sum
    }

    // Display the final result of the running sum
    printf("The sum from %d to %d is: %d\n", lower, upper, sum);

    return 0; // Exit code
}