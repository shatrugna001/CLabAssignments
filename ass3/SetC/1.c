#include <stdio.h>
 
long long fib(int n)
{
    if(n <= 2)
    {
        return 1;
    }
 
    return fib(n-1) + fib(n-2);
}
 
int main()
{
    int n;
 
    printf("Enter the number of terms: ");
    scanf("%d", &n);
 
    for(int i = 1; i <= n; i++)
    {
        printf("%lld ", fib(i));
    }
 
    return 0;
}
