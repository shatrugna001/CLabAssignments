#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q, n, i, j = 0;
    int sum = 0;
    float avg;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid size\n");
        return 1;
    }

    p = (int *)malloc(n * sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    q = (int *)malloc(n * sizeof(int));

    if(q == NULL)
    {
        printf("Memory allocation failed\n");
        free(p);
        return 1;
    }

    printf("Enter integers:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(p[i] != 0)
        {
            q[j] = p[i];
            sum = sum + q[j];
            j++;
        }
    }

    printf("Non-zero elements are:\n");

    for(i = 0; i < j; i++)
    {
        printf("%d ", q[i]);
    }

    printf("\nSum = %d\n", sum);

    if(j > 0)
    {
        avg = (float)sum / j;
        printf("Average = %.2f\n", avg);
    }
    else
    {
        printf("Average cannot be calculated because there are no non-zero elements\n");
    }

    free(p);
    free(q);

    return 0;
}