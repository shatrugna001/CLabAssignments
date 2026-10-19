// Write a  program to read two  integers using pointers and  perform all  arithmetic  operations on them

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

    printf("The sum of the pointers %d and %d is = %d\n",*p,*q,*p + *q);
    printf("The sub of the pointers %d and %d is = %d\n",*p,*q,*p - *q);
    printf("The mul of the pointers %d and %d is = %d\n",*p,*q,*p * *q);
    printf("The div of the pointers %d and %d is = %d\n",*p,*q,*q / *p);
}