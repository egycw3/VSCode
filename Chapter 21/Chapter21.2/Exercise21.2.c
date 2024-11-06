#include <stdio.h>
#include <stdlib.h>  // For atoi function

// Function to calculate the day of the week
int CalculateDayOfWeek(int Y, int M, int D)
{
    // Adjust month and year if month is January or February
    if (M < 3)
    {
        M += 12;
        Y -= 1;
    }

    // Calculate day of the week (0 = Saturday, 1 = Sunday, ..., 6 = Friday)
    int nd = (D + (13 * (M + 1)) / 5 + Y + Y / 4 - Y / 100 + Y / 400) % 7;
    return nd;  // Return the result
}

// Function to display the day of the week based on the calculated value
void DisplayDayOfWeek(int day)
{
    switch(day)
    {
        case 0: printf("Saturday\n"); break;
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        default: printf("Invalid day\n"); // In case something went wrong
    }
}

int main(int argc, char *argv[])
{
    int y, m, d, nd; // Declare variables for year, month, day, and calculated day of the week

    if (argc == 4) // If exactly three arguments are passed (program name + day, month, year)
    {
        // Convert command-line arguments to integers
        d = atoi(argv[1]); // Convert first argument to day
        m = atoi(argv[2]); // Convert second argument to month
        y = atoi(argv[3]); // Convert third argument to year
    }
    else // If incorrect number of arguments, prompt user for input
    {
        // Get user input for year, month, and day
        printf("\nPlease enter the year: ");
        scanf("%d", &y);
        printf("\nPlease enter the month: ");
        scanf("%d", &m);
        printf("\nPlease enter the day: ");
        scanf("%d", &d);
    }

    // Call the function to calculate the day of the week
    nd = CalculateDayOfWeek(y, m, d);

    // Output the day of the week using the display function
    printf("\nThe day of the week is: ");
    DisplayDayOfWeek(nd);

    return 0; // Exit code
}