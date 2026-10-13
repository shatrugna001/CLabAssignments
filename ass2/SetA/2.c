// Accept two complex numbers from the user (real part, imaginary part). Write a menut driven 
// program to perform the following operations till the user selects Exit. 
// i. ADD ii. SUBTRACT iii. MULTIPLY iv. EXIT

#include <stdio.h>
 
typedef struct {
    double r, i;
} Complex;
 
int main()
{
    Complex a, b;
    int choice;
 
    do {
        printf("\n1.Add 2.Subtract 3.Multiply 4.Exit\n");
        scanf("%d", &choice);
 
        if(choice >= 1 && choice <= 3)
        {
            printf("Enter real and imaginary parts of first number: ");
            scanf("%lf%lf", &a.r, &a.i);
 
            printf("Enter real and imaginary parts of second number: ");
            scanf("%lf%lf", &b.r, &b.i);
        }
 
        switch(choice)
        {
            case 1:
                printf("%.2f %+.2fi\n", a.r+b.r, a.i+b.i);
                break;
 
            case 2:
                printf("%.2f %+.2fi\n", a.r-b.r, a.i-b.i);
                break;
 
            case 3:
                printf("%.2f %+.2fi\n", a.r*b.r-a.i*b.i, a.r*b.i+a.i*b.r);
                break;
 
            case 4:
                break;
 
            default:
                printf("Invalid choice");
        }
    } while(choice != 4);
 
    return 0;
}
