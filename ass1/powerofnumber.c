#include <stdio.h>
#include <math.h>

void main(){
    int x,y;

    printf("Enter integer 1:");
    scanf("%d",&x);
    printf("Enter integer 2:");
    scanf("%d",&y);

    int power = pow(x,y);

    printf("The number %d raised to %d is equal to %d",x,y,power);
}