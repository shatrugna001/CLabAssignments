// Write a program to read N integers in an array using pointers and display minimum from
// them.

#include <stdio.h>

void minimum(int *p, int n, int *min)
{
    int i;

    *min = p[0];

    for(i = 1; i < n; i++)
    {
        if(p[i] < *min)
        {
            *min = p[i];
        }
    }
}

int main()
{
    int arr[100], n, i, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 100)
    {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minimum(arr, n, &min);

    printf("Minimum element = %d\n", min);

    return 0;
}