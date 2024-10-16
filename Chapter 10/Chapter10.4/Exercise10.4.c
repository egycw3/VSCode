#include <stdio.h>

// Define the function to calculate the day of the week
int CalculateDayOfWeek(int Y, int M, int D)
{
    // Adjust month and year if month is January or February
    if (M < 3)
    {
        M += 12;
        Y -= 1;
    }

    // Calculate day of the week (0 = Monday, 1 = Tuesday, ..., 6 = Sunday)
    int nd = (D + (13 * (M + 1)) / 5 + Y + Y / 4 - Y / 100 + Y / 400) % 7;
    return nd;  // Return the result
}

int main(void)
{
    int y, m, d, nd; // Declare variables for year, month, day, and calculated day of the week

    // Get user input for year, month, and day
    printf("\nPlease enter the year: ");
    scanf("%d", &d);
    printf("\nPlease enter the month: ");
    scanf("%d", &m);
    printf("\nPlease enter the day: ");
    scanf("%d", &d);

    // Call the function to calculate the day of the week
    nd = CalculateDayOfWeek(y, m, d);

    // Output the result
    printf("\nThe day of the week is %d.\n", nd);

    return 0; // Return successful exit code
}