// Accept two complex numbers from the user (real part, imaginary part). Write a menut driven 
// program to perform the following operations till the user selects Exit. 
// i. ADD ii. SUBTRACT iii. MULTIPLY iv. EXIT

#include <stdio.h>

typedef struct {
    
    float real;
    float img;
    
} complex;

complex add( complex n1, complex n2);

int main()
{
    complex n1, n2, result;
    
    printf("Enter the first numbers\n");
    printf("Enter the first and second part of the imaginary number: ");
    scanf("%f %f",&n1.real,&n1.img);
    printf("Enter the second numbers\n");
    printf("Enter the first and second part of the imaginary number: ");
    scanf("%f %f",&n2.real,&n2.img);

    result = add(n1,n2);

    printf("Sum = %1f + %1fi",result.real, result.img);
    
    return 0;
}

complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;
    return temp;
}