#include <stdio.h>

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
        // Print the current counter value followed by a space
        printf("%d", i);
        
        // Print a space after each number except the last one
        if (i < upper)
        {
            printf(" "); // Print space only if it's not the last number
        }
    }

    printf("\n"); // Print a new line at the end for better output formatting

    return 0; // Exit code
}
