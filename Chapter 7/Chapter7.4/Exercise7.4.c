#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    char name[50];

    // Wait for a kepypress, store result in c
    printf ("Please enter your name: ");

    // read in using scanf with %s
    scanf ("%s",name);

    // Display on the screen using printf
    printf ("Hello %s.\n", name);

	// Declare variable - maximum 99 characters
    char str[100];

    // Clear the input buffer before using gets()
    while (getchar() != '\n'); // Clear the newline left by scanf
    
    // Prompt for text
    printf("Please enter you name: "); 
    
    // Store intput in str 
    gets(str); 
    
    // Display a message on the screen
    printf("Hello %s.\n", str); 

    // Exit from main
    return 0;
}