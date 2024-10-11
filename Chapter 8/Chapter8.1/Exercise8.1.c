#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int  a = 7, b=6;
    
    // Prompt for text
    printf("Please enter value of a: "); 
    
    // Store input in str 
    scanf("%d", &a);

    // Prompt for text
    printf("Please enter value of b: "); 
    
    // Store input in str 
    scanf("%d", &b);

	// A single line of code conditional on the value of a
	if ( a == 7)
    {
	   printf ("The value of a is 7.\n");
    }
    else
    {
        printf ("The value of a is not that.\n");
    }   
	   
	// Multiple lines of code conditional on b not equalling 6
	if ( b == 6 )
	{
	   printf ("The value of b is 6.\n");       
	}
    else
        printf ("The value of b is not that.\n");
	   
    return 0;   // Exit from main
}