#include <stdio.h>

struct employee
{
    char name[50];
    char street[100];
    char city[50];
};

int main()
{
    struct employee e[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Enter street: ");
        scanf(" %[^\n]", e[i].street);

        printf("Enter city: ");
        scanf(" %[^\n]", e[i].city);
    }

    printf("\n--- Employee Details ---\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Street: %s\n", e[i].street);
        printf("City: %s\n", e[i].city);
    }

    return 0;
}