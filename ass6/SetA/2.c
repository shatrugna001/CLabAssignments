#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, i;

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

    printf("Integers in reverse order:\n");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}