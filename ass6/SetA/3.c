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

    p = (int *)calloc(n, sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}