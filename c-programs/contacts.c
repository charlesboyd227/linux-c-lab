#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    int age;
};

void addContact() {
    struct Contact person;
    FILE *file;

    file = fopen("contacts.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter name: ");
    scanf("%49s", person.name);

    printf("Enter age: ");
    scanf("%d", &person.age);

    fprintf(file, "%s %d\n", person.name, person.age);
    fclose(file);

    printf("Contact added successfully.\n");
}

void viewContacts() {
    struct Contact person;
    FILE *file;

    file = fopen("contacts.txt", "r");

    if (file == NULL) {
        printf("No contacts found.\n");
        return;
    }

    printf("\nContact List:\n");

    while (fscanf(file, "%49s %d", person.name, &person.age) == 2) {
        printf("Name: %s | Age: %d\n", person.name, person.age);
    }

    fclose(file);
}

int main() {
    int choice;

    do {
        printf("\n--- Contact Manager ---\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);

        if (choice == 1) {
            addContact();
        } else if (choice == 2) {
            viewContacts();
        } else if (choice == 3) {
            printf("Goodbye!\n");
        } else {
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}
