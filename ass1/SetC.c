#include <stdio.h>

void program1()
{
    int n, temp, last, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n != 0)
    {
        last = n % 10;
        reversed = reversed * 10 + last;
        n = n / 10;
    }

    if(temp == reversed)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
}

void program2()
{
    for(int n = 1; n <= 500; n++)
    {
        int temp = n, sum = 0;

        while(temp > 0)
        {
            int d = temp % 10;
            sum = sum + d * d * d;
            temp = temp / 10;
        }

        if(sum == n)
        {
            printf("%d\n", n);
        }
    }
}

void program3()
{
    for(int n = 1; n < 500; n++)
    {
        int sum = 0;

        for(int i = 1; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == n)
        {
            printf("%d\n", n);
        }
    }
}

int main()
{
    program1();

    return 0;
}