// Write a  program to  find  maximum from two integers using pointers.

#include <stdio.h>

void main()
{
    int a;
    int b;
    
    printf("Enter Integer 1:");
    scanf("%d",&a);
    printf("Enter Integer 2:");
    scanf("%d",&b);

    int *p = &a;
    int *q = &b;

    if(*p > *q)
    {
        printf("%d is greater than %d",*p,*q);
    }

    else{
        printf("%d is greater than %d",*q,*p);
    }
}