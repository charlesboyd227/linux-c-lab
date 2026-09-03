#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    int arr[] = {1, 2, 3};
    int *ptr = arr;

    printf("Array using pointers:\n");

    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(ptr + i));
    }

    struct Person p;
    strcpy(p.name, "Alice");
    p.age = 25;

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    return 0;
}
