#include <stdio.h>

void program1()
{
    int n, temp,last, reversed = 0;

    printf("Enter a number to check if its a pallindrome or not :");
    scanf("%d", &n);

    temp = n;

    while ( n != 0)
    {
        last = n % 10;
        reversed = reversed*10 + last;
        n = n / 10;
    }

    if (temp == reversed)
    {
        printf("The number is pallindrome");
    }

    else {
        printf("The number is not a pallindrome");
    }

}

void program2()
{
    for (int n = 1; n <= 500; n++) 
    {
        int temp = n, sum = 0;

        while (temp > 0) {

            int d = temp % 10;
            sum += d * d * d;
            temp /= 10;
        }

        if (sum == n) printf("%d ", n);
    }

}

void program3()
{
    for (int n = 1; n < 500; n++) 
    {
        int sum = 0;
        for (int d = 1; d <= n / 2; d++)
            if (n % d == 0) sum += d;
        if (sum == n) printf("%d ", n);
    }

}


int main()
{
    program2();
    return 0;
}