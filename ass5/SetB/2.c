// Accept n integers in array A in main. Write a function which takes this array as parameter
// and find minimum and maximum from it. Display these values in main.

#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max)
{
    int i;

    *min = arr[0];
    *max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < *min)
        {
            *min = arr[i];
        }

        if(arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}

int main()
{
    int arr[100], n, i, min, max;

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

    findMinMax(arr, n, &min, &max);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}