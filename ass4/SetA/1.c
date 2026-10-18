#include <stdio.h>

void program1()
{
    int n, a[100], largest, smallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }

    largest = a[0];
    smallest = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }

        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d", smallest);
}

int main()
{
    program1();

    return 0;
}