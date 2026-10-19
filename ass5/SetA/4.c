// Write  a  program  to  display the  elements of an  array containing  n  integers in  the  reverse order using a pointer to the array. 

#include <stdio.h>

void main()
{
    int arr[100];
    int n;
    
    int *p = arr;

    printf("Enter the number of elements you want to input in the array: ");
    scanf("%d",&n);
    
    printf("enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Here are the array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
}