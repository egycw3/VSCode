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
	if (value <= 5)
    {
	   printf ("Still a baby.\n");
    }
    else if (value > 5 && value <= 12)
    {
        printf ("The junior years.\n");
    }
    else if (value > 12 && value < 20)
    {
        printf ("Teenage years.\n");
    }  
    else
    {
        printf ("Downhill all the way now!\n");
    }   
	   
    return 0;   // Exit from main
}