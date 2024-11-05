#include <stdio.h>
#include <stdlib.h>

// Main () - execution starts here
int main (void)
{
    // Declare file stream variables
    FILE *fInput, *fOutput;

    // Other variables needed
    int i, value, square;
    char filename[100];

    //Enters name
    printf("Please enter filename: \n");
    scanf("%s", filename);

    // Try and open the text "sample.txt" (in the current directory) file for writing
    fOutput = fopen (filename, "w");

    // Check we were able to open the file
    if ( fOutput == NULL)
    {
        printf ("\nthe file could not be opened for writing, exiting");
        return -1;
    }

    // Use a loop to write values to the newly created file
    for ( i = 1 ; i <= 10 ; i++)
    {
        fprintf (fOutput, "%d\n", i);
        square = i*i;
        fprintf (fOutput, "%d\n", square);
    }

    // And close the file
    fclose (fOutput);

    // Try and open the binary "numbers " (in the current directory) file for reading

    fInput = fopen (filename, "r");

    // Check we were able to open the file
    if ( fInput == NULL)
    {
        printf ("\nthe file could not be opened for reading, exiting");
        return -1;
    }
 
    // Read, line by line the 10 values written into variable d
    // and then display the contents of d on the screen
    for ( i = 1 ; i <= 10 ; i++)
    {
        fscanf (fInput, "%d", &value);
        printf ("Value read from file %d\n", value);
        fscanf (fInput, "%d", &square);
        printf ("Value squared of file is %d\n", square);
    }

    // And close the file
    fclose (fInput);

    return (0);     // Exit indicating success
}