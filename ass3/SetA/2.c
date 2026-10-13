#include <stdio.h>
 
int isPrime(int n)
{
    if(n < 2)
    {
        return 0;
    }
 
    for(int i = 2; i <= n / i; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
 
    return 1;
}
 
int main()
{
    int n;
 
    do {
        printf("Enter number (0 to quit): ");
        scanf("%d", &n);
 
        if(n != 0)
        {
            if(isPrime(n))
            {
                printf("%d is prime\n", n);
            }
            else
            {
                printf("%d is not prime\n", n);
            }
        }
    } while(n != 0);
 
    return 0;
}
