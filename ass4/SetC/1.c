#include <stdio.h>

void program1()
{
    int a[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    program1();

    return 0;
}