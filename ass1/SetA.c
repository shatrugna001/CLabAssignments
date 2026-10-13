#include <stdio.h>
#include <math.h>

void program1(){

    int n;
    printf("Enter the number upto which you want to see the even numbers");
    scanf("%d", &n);

    for(int i = 2; i <= n; i+=2)
    {
        printf("%d\n",i);
    }
}

void program2(){

    int x,y;
    int sum = 0;

    printf("Enter integer 1:");
    scanf("%d",&x);
    printf("Enter integer 2:");
    scanf("%d",&y);

    for (x; x <= y; x++)
    {
        sum = sum + x;
    }

    printf("The sum of integers between %d and %d is %d",x, y, sum);

}

void program3(){

    int x,y;

    printf("Enter integer 1:");
    scanf("%d",&x);
    printf("Enter integer 2:");
    scanf("%d",&y);

    int power = pow(x,y);

    printf("The number %d raised to %d is equal to %d",x,y,power);
    
}

void program4(){

    int x;
    int count = 0;

    printf("Enter integer 1:");
    scanf("%d",&x);

    for (int i = 1; i <= x ; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }

    if (count == 2){
        printf("The number is a prime number");
    }

    else{
        printf("The number is not prime");
    }
}

void program5(){
    int x,last;
    int temp;
    int count = 0;

    printf("Enter a number to count its digits:");
    scanf("%d",&x);

    temp = x;

    for(int i = 0; i < x; i++)
    {
        last = x % 10;
        x = x / 10;
        count++;
    }

    printf("The digits in the number %d are %d",temp,count);
}

void program6(){

    //program to accept a character and integer and display values upto n
    char x;
    int y;

    printf("Enter a character:");
    scanf("%c",&x);
    printf("Enter a number:");
    scanf("%d",&y);

    for(int i = 0; i < y; i++)
    {
        printf("%c\n",x);
        x++;
    }
        

}

void program7(){
    int x, y;

    printf("Enter integer 1: ");
    scanf("%d", &x);
    printf("Enter integer 2: ");
    scanf("%d", &y);

   
    for (int i = x; i <= y; i++) {
        int count = 0; 

        
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d\n", i);
        }
    }
}

void program8(){


    //printing tables

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n",i,j,j*i);   
        }

        printf("\t");
    
}

}

void program9(){
    int n;
    char ch = 'A';

    printf("Enter the number of line you want to print");
    scanf("%d",&n);

    for(int i = n; i >= 0; i--)
    {
        for( int j = 0; j < i; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}

void main(){

    program10();

}