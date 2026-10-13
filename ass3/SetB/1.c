#include <stdio.h>
 
int isEven(int n)
{
    return n % 2 == 0;
}
 
int main()
{
    int n, x;
 
    printf("How many numbers? ");
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
 
        if(isEven(x))
        {
            printf("%d is even\n", x);
        }
        else
        {
            printf("%d is odd\n", x);
        }
    }
 
    return 0;
}
