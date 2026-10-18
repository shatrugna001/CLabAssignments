#include <stdio.h>

void program2()
{
    int a[100], n = 0, num, search, count = 0;

    while(1)
    {
        printf("Enter a number from 1 to 25 (-1 to stop): ");
        scanf("%d", &num);

        if(num == -1)
        {
            break;
        }

        if(num >= 1 && num <= 25)
        {
            a[n] = num;
            n++;
        }
        else
        {
            printf("Invalid number\n");
        }
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            count++;
        }
    }

    printf("%d occurs %d times", search, count);
}

int main()
{
    program2();

    return 0;
}