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
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Enter joining date (dd mm yyyy): ");
        scanf("%d %d %d",
              &e[i].joining.dd,
              &e[i].joining.mm,
              &e[i].joining.yyyy);
    }

    printf("\nEnter month to search (1-12): ");
    scanf("%d", &month);

    printf("\nEmployees joining in month %d:\n", month);

    for(i = 0; i < n; i++)
    {
        if(e[i].joining.mm == month)
        {
            printf("\nID: %d", e[i].id);
            printf("\nName: %s", e[i].name);
            printf("\nJoining Date: %02d-%02d-%04d\n",
                   e[i].joining.dd,
                   e[i].joining.mm,
                   e[i].joining.yyyy);
        }
    }

    return 0;
}