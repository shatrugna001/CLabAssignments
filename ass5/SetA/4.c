// Write  a  program  to  display the  elements of an  array containing  n  integers in  the  reverse order using a pointer to the array. 

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int *p = arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements in reverse order: ");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}