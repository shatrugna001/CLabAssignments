#include <stdio.h>

void program1(){

    int x,n;
    int sum = 0;

    printf("enter a real number:");
    scanf("%d",&x);
    printf("enter the range:");
    scanf("%d",&n);


    for(int i = 1; i <= n; i+=2)
    {
        for (int j = i; j <= n; j++)
        {
            sum = sum + x*j;
        }
    }

    printf("%d",sum);
}

void main(){
    program1();
}