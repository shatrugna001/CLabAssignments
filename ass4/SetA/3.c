#include <stdio.h>

int count(int a[], int n, int num)
{
    int c = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            c++;
        }
    }

    return c;
}

void program3()
{
    int a[100], n, num, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }

    printf("Number to search: ");
    scanf("%d", &num);

    result = count(a, n, num);

    printf("%d occurs %d times", num, result);
}

int main()
{
    program3();

    return 0;
}