#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    char FileName[100];

    // Display the program's name (argv[0])
    printf("Program name: %s\n", argv[0]);

    // Check if there are arguments passed to the program
    if (argc < 2) {
        printf("No file numbers provided.\n");
        return 1; // Exit if no arguments are provided
    }

    // Loop through the arguments provided (argv[1] to argv[argc-1])
    for (i = 1; i < argc; i++) {
        // 'Print' text into the FileName string using the argument value
        sprintf(FileName, "file%s.dat", argv[i]);

        // Display the file name created based on the argument
        printf("Current file name: %s\n", FileName);
    }

    return 0;
}