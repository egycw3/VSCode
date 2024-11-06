#include <stdio.h>

struct Person
{
    int age;
    char forename[30];
    char surname[50];
};

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

    // Displaying stored information
    printf("\nStored Information:\n");
    printf("Age: %d\n", person.age);
    printf("Forename: %s\n", person.forename);
    printf("Surname: %s\n", person.surname);

    return 0;
}