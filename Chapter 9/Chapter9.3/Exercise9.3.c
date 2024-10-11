#include <stdio.h>

int main(void)
{
    char name[100]; // Declare a character array to hold the name

    // Ask the user to enter their name
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin); // Use fgets to read the name, allowing spaces

    // Infinite loop to continuously display the name
    while (1) 
    {
        printf("%s", name); // Print the name on a new line
    }

    return 0; // This line will never be reached
}
