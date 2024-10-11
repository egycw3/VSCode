#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age; // Declare variable

    do
    {
        printf("\nPlease enter your age (enter 0 to exit): ");
        scanf("%d", &age);

        // Check for valid input
        if (age < 0)
        {
            printf("Invalid input. Age must be a non-negative number.\n");
            continue; // Skip the rest of the loop and prompt again
        }

        // Print the age (this will include 0)
        printf("You are %d years old.\n", age);

        // Check for specific ages
        if (age == 18 || age == 21)
        {
            printf("You have come of age.\n");
        }

    } while (age != 0); // Continue looping until the user enters 0

    printf("Exiting the program.\n"); // Exit message when age is 0

    return 0; // Exit code
}