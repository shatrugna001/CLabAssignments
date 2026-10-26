#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, i, max;

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

    printf("Enter integers:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    max = p[0];

    for(i = 1; i < n; i++)
    {
        if(p[i] > max)
        {
            max = p[i];
        }
    }

    printf("Maximum element = %d\n", max);

    free(p);

    return 0;
}