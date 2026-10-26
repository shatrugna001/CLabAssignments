#include <stdio.h>

struct book
{
    int id;
    char title[50];
    char author[50];
    float price;
};

void display(struct book b)
{
    printf("\n--- Book Details ---\n");
    printf("Book ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main()
{
    struct book b;

    printf("Enter book ID: ");
    scanf("%d", &b.id);

    printf("Enter book title: ");
    scanf(" %[^\n]", b.title);

    printf("Enter author name: ");
    scanf(" %[^\n]", b.author);

    printf("Enter book price: ");
    scanf("%f", &b.price);

    display(b);

    return 0;
}