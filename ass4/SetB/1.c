// Write a program to accept n numbers in an array and calculate the average of n numbers.

#include <stdio.h>

void program1()
{
    int a[100], n, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);
}

int main()
{
    program1();

    return 0;
}