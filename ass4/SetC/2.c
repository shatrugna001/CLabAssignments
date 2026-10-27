// Write a program to accept an mXn matrix and display an m+1 X n+1 matrix such that the
// m+1th row contains the sum of all elements of corresponding row and the n+1th column
// contains the sum of elements of the corresponding column.

#include <stdio.h>

void program2()
{
    int a[10][10], m, n;
    int rowSum, colSum, total = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix elements:\n");

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Resultant matrix:\n");

    for(int i = 0; i < m; i++)
    {
        rowSum = 0;

        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);

            rowSum = rowSum + a[i][j];
        }

        printf("%d\n", rowSum);
        total = total + rowSum;
    }

    for(int j = 0; j < n; j++)
    {
        colSum = 0;

        for(int i = 0; i < m; i++)
        {
            colSum = colSum + a[i][j];
        }

        printf("%d ", colSum);
    }

    printf("%d", total);
}

int main()
{
    program2();

    return 0;
}