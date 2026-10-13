#include <stdio.h>
#include <math.h>

void program1()
{
    int n;
    double x, sum = 0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (2*i-1)*x;
    }

    printf("The sum of the first %d terms is %.2f\n", n, sum);
}

void program2()
{
    int n;
    double x, sum = 0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if(x == 0)
    {
        printf("x must be non-zero");
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            sum = sum + i / pow(x, i);
        }

        printf("The sum of the first %d terms is %.4f\n", n, sum);
    }
}

int main()
{
    program2();
    return 0;
}