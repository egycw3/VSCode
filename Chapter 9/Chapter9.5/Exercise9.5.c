#include <stdio.h>

int main(void)
{
    // Loop to count from 1 to 15 inclusive
    for (int i = 1; i <= 15; i++)
    {
        // Print the current counter value followed by a space
        printf("%d", i);
        
        // Print a space after each number except the last one
        if (i < 15)
        {
            printf(" "); // Print space only if it's not the last number
        }
    }

    printf("\n"); // Print a new line at the end for better output formatting

    return 0; // Exit code
}
