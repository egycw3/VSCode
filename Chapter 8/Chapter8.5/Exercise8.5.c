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
	if (value == 0)
    {
	   printf ("Black.\n");
    }
    else if (value == 1)
    {
        printf ("Brown.\n");
    }
    else if (value == 2)
    {
        printf ("Red.\n");
    }
    else if (value == 3)
    {
        printf ("Orange.\n");
    }  
    else if (value == 4)
    {
        printf ("Yellow.\n");
    }  
    else if (value == 5)
    {
        printf ("Green.\n");
    }  
    else if (value == 6)
    {
        printf ("Blue.\n");
    }  
    else if (value == 7)
    {
        printf ("Violet.\n");
    }  
    else if (value == 8)
    {
        printf ("Grey.\n");
    }  
    else if (value == 9)
    {
        printf ("White.\n");
    }  
    else
    {
        printf ("Inavlid input\n");
    }   
	   
    return 0;   // Exit from main
}