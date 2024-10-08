#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Declare variable - maximum 99 characters
    char name[100];
    
    // Prompt for text
    printf("Please enter your name: "); 
    
    // Store intput in str 
    fgets(name, sizeof(name), stdin);

    // Declare variable - maximum 99 characters
    int age;
    
    // Prompt for text
    printf("Please enter you age: "); 
    
    // Store intput in str 
    scanf("%d", &age); 
    
    // Display a message on the screen
    printf("Hello %s.\nYou are %d years old.", name, age); 

    // Exit from main
    return 0;
}