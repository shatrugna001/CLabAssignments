#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i;

    p = (int *)malloc(10 * sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter 5 integers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Entered integers are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}