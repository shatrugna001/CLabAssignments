// Write a program to find the sum of diagonal elements of a matrix.

#include <stdio.h>

void program2()
{
    int a[10][10], n, sum = 0;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    
    printf("Sum of diagonal elements = %d", sum);
}

int main()
{
    program2();

    return 0;
}