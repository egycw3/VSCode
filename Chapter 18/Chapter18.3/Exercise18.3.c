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

    // Reading information into the struct
    printf("Enter age: ");
    scanf("%d", &person.age);

    printf("Enter forename (up to 30 characters): ");
    scanf("%s", person.forename);

    printf("Enter surname (up to 50 characters): ");
    scanf("%s", person.surname);

    printf("Enter year of birth: ");
    scanf("%d", &person.yearOfBirth); // Prompt and store year of birth

    // Call the function to display information
    displayPerson(person);

    return 0;
}