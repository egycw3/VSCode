#include <stdio.h>

struct Person
{
    int age;
    char forename[30];
    char surname[50];
    int yearOfBirth; // New member added to store the year of birth
};

// Function to display the struct information
void displayPerson(struct Person person)
{
    printf("\nStored Information:\n");
    printf("Age: %d\n", person.age);
    printf("Forename: %s\n", person.forename);
    printf("Surname: %s\n", person.surname);
    printf("Year of Birth: %d\n", person.yearOfBirth); // Displaying the new member
}

int main()
{
    struct Person person;
    FILE *file;
    int choice;

    // Menu for user choice
    printf("Choose an option:\n");
    printf("1. Enter data values and store them to a file\n");
    printf("2. Read data from a file and display it\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // Option 1: Enter data and store to file
        // Reading information into the struct
        printf("Enter age: ");
        scanf("%d", &person.age);

        printf("Enter forename (up to 30 characters): ");
        scanf("%s", person.forename);

        printf("Enter surname (up to 50 characters): ");
        scanf("%s", person.surname);

        printf("Enter year of birth: ");
        scanf("%d", &person.yearOfBirth); // Prompt and store year of birth

        // Open file for writing in binary mode
        file = fopen("person_data.dat", "wb");
        if (file == NULL)
        {
            printf("Error opening file for writing.\n");
            return 1;
        }

        // Write the data to the file
        fwrite(&person, sizeof(struct Person), 1, file);
        printf("Data has been written to the file.\n");

        // Close the file
        fclose(file);
    }
    else if (choice == 2)
    {
        // Option 2: Read data from file and display
        // Open file for reading in binary mode
        file = fopen("person_data.dat", "rb");
        if (file == NULL)
        {
            printf("Error opening file for reading.\n");
            return 1;
        }

        // Read the data from the file
        fread(&person, sizeof(struct Person), 1, file);

        // Display the information
        displayPerson(person);

        // Close the file
        fclose(file);
    }
    else
    {
        printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}