#include <stdio.h>

struct Person
{
    int age;
    char forename[30];
    char surname[50];
};

// Function to display the struct information
void displayPerson(struct Person person)
{
    printf("\nStored Information:\n");
    printf("Age: %d\n", person.age);
    printf("Forename: %s\n", person.forename);
    printf("Surname: %s\n", person.surname);
}

int main()
{
    struct Person person;

    // Reading information into the struct
    printf("Enter age: ");
    scanf("%d", &person.age);

    printf("Enter forename (up to 30 characters): ");
    scanf("%s", person.forename); // No & needed for char arrays

    printf("Enter surname (up to 50 characters): ");
    scanf("%s", person.surname);

    // Call the function to display information
    displayPerson(person);

    return 0;
}