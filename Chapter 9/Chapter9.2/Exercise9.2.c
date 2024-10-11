#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age = 1; // Declare variable and initialize to 1

    while (age != 0) // Loop as long as age is not zero
    {
        printf("\nPlease enter your age: ");
        scanf("%d", &age);
        
        // Check for valid input
        if (age < 0)
        {
            printf("Invalid input. Age must be a non-negative number.\n");
            continue; // Skip the rest of the loop and prompt again
        }

        if (age == 0) // Check for exit condition
        {
            printf("Exiting the program.\n");
            break; // Exit the loop
        }

        // Print the age
        printf("You are %d years old.\n", age);

        // Check for specific ages
        if (age == 18 || age == 21)
        {
            printf("You have come of age.\n");
        }
    }

    return 0; // Exit code
}
