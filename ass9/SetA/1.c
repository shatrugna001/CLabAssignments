#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e[50];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n--- Employee Summary ---\n");
    printf("ID\tName\t\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s\t%.2f\n",
               e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}