#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p;
    int m, n, i, j, sum;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    if(m <= 0 || n <= 0)
    {
        printf("Invalid matrix size\n");
        return 1;
    }

    p = (int **)malloc(m * sizeof(int *));

    if(p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(i = 0; i < m; i++)
    {
        p[i] = (int *)malloc(n * sizeof(int));

        if(p[i] == NULL)
        {
            printf("Memory allocation failed\n");

            for(j = 0; j < i; j++)
            {
                free(p[j]);
            }

            free(p);
            return 1;
        }
    }

    printf("Enter matrix elements:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }

    printf("\nColumn-wise sums:\n");

    for(j = 0; j < n; j++)
    {
        sum = 0;

        for(i = 0; i < m; i++)
        {
            sum = sum + p[i][j];
        }

        printf("Column %d sum = %d\n", j + 1, sum);
    }

    for(i = 0; i < m; i++)
    {
        free(p[i]);
    }

    free(p);

    return 0;
}