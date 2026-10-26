#include <stdio.h>

struct item
{
    int item_no;
    char item_name[50];
    float rate;
    int qty;
    float total;
};

int main()
{
    struct item it[50];
    int n, i;
    float grand_total = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of item %d:\n", i + 1);

        printf("Enter item number: ");
        scanf("%d", &it[i].item_no);

        printf("Enter item name: ");
        scanf(" %[^\n]", it[i].item_name);

        printf("Enter rate: ");
        scanf("%f", &it[i].rate);

        printf("Enter quantity: ");
        scanf("%d", &it[i].qty);

        it[i].total = it[i].rate * it[i].qty;

        grand_total = grand_total + it[i].total;
    }

    printf("\n---------------- BILL ----------------\n");
    printf("Sr.No.\tItem Name\tRate\tQty\tTotal\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-15s\t%.2f\t%d\t%.2f\n",
               i + 1,
               it[i].item_name,
               it[i].rate,
               it[i].qty,
               it[i].total);
    }

    printf("\nGrand Total: %.2f\n", grand_total);

    return 0;
}