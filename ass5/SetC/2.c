#include <stdio.h>

void checkNumber(int n, int *even, int *prime, int *divisible)
{
    int i;

    if(n % 2 == 0)
    {
        *even = 1;
    }

    if(n > 1)
    {
        *prime = 1;

        for(i = 2; i <= n / i; i++)
        {
            if(n % i == 0)
            {
                *prime = 0;
                break;
            }
        }
    }

    if(n % 3 == 0 || n % 7 == 0)
    {
        *divisible = 1;
    }
}

int main()
{
    int n;
    int even = 0, prime = 0, divisible = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    checkNumber(n, &even, &prime, &divisible);

    if(even == 1)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    if(prime == 1)
    {
        printf("Number is prime\n");
    }
    else
    {
        printf("Number is not prime\n");
    }

    if(divisible == 1)
    {
        printf("Number is divisible by 3 or 7\n");
    }
    else
    {
        printf("Number is not divisible by 3 or 7\n");
    }

    return 0;
}