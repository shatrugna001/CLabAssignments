#include <stdio.h>

void accept(int a[10][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void add(int a[10][10], int b[10][10], int sum[10][10],
         int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void display(int a[10][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

void program4()
{
    int a[10][10], b[10][10], sum[10][10];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    accept(a, r, c);

    printf("Enter second matrix:\n");
    accept(b, r, c);

    add(a, b, sum, r, c);

    printf("Sum of matrices:\n");
    display(sum, r, c);
}

int main()
{
    program4();

    return 0;
}