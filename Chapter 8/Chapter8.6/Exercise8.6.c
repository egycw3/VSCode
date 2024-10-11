#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int value;
    
    // Prompt for text
    printf("Please enter an integer value: "); 
    
    // Store input in value
    scanf("%d", &value);

    // Use switch case to check the value
    switch (value)
    {
        case 0:
            printf("Black.\n");
            break;
        case 1:
            printf("Brown.\n");
            break;
        case 2:
            printf("Red.\n");
            break;
        case 3:
            printf("Orange.\n");
            break;
        case 4:
            printf("Yellow.\n");
            break;
        case 5:
            printf("Green.\n");
            break;
        case 6:
            printf("Blue.\n");
            break;
        case 7:
            printf("Violet.\n");
            break;
        case 8:
            printf("Grey.\n");
            break;
        case 9:
            printf("White.\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }   
    
    return 0;   // Exit from main
}