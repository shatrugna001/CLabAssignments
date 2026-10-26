#include <stdio.h>

struct date
{
    int dd, mm, yyyy;
};

struct employee
{
    int id;
    char name[50];
    struct date joining;
};

int main()
{
    struct employee e[50];
    int n, i, month;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Enter joining date (dd mm yyyy): ");
        scanf("%d %d %d",
              &e[i].joining.dd,
              &e[i].joining.mm,
              &e[i].joining.yyyy);
    }

    printf("\nEnter month to search: ");
    scanf("%d", &month);

    for(i = 0; i < n; i++)
    {
        if(e[i].joining.mm == month)
        {
            printf("\nID: %d\n", e[i].id);
            printf("Name: %s\n", e[i].name);
            printf("Date: %02d-%02d-%04d\n",
                   e[i].joining.dd,
                   e[i].joining.mm,
                   e[i].joining.yyyy);
        }
    }

    return 0;
}