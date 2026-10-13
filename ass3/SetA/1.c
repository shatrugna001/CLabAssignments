#include <stdio.h>
 
int Max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
 
int main()
{
    int a, b, c;
 
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
 
    printf("Maximum = %d", Max(Max(a,b),c));
 
    return 0;
}
