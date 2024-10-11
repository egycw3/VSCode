#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  value;
    
    // Prompt for text
    printf("Please enter an integer value: "); 
    
    // Store input in str 
    scanf("%d", &value);

	// A single line of code conditional on the value of a
	if (value >= 0 && value <= 10)
    {
	   printf ("The number is in range.\n");
    }
    else
    {
        printf ("The number is not in range.\n");
    }   
	   
    return 0;   // Exit from main
}