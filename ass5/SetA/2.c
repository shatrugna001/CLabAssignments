// Write a program to accept an integer using pointer and  check  whether  it is even or  odd. 

#include <stdio.h>

void main()
{
    int a;
    
    printf("Enter Integer 1:");
    scanf("%d",&a);

    int *p = &a;

    if (*p % 2 == 0)
    {
        printf("The integer is a even number");

    }
    else{
        printf("The integer is odd");
    }
}