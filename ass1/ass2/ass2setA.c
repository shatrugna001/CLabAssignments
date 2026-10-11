#include <stdio.h>
#include <math.h>


void program1()
{
    int choice;
    double x;
    do {
        printf("\n1.Sine 2.Cosine 3.Log 4.Exp 5.Sqrt 6.Exit\n");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 5) {
            printf("Enter x: "); 
            scanf("%lf", &x);
        }
        switch (choice) {
            case 1: 
            printf("%.4f\n", sin(x)); 
            break;

            case 2: 
            printf("%.4f\n", cos(x)); 
            break;

            case 3: 
            if (x > 0) {
                printf("%.4f\n", log(x)); 
            }
            else {
                printf("x must be positive");
            }
              break;

            case 4: 
            printf("%.4f\n", exp(x)); 
            break;

            case 5: 
            if (x >= 0) {
                printf("%.4f\n", sqrt(x));
            } 
            else{
                ("x must be non-negative");
            }
            break;

            case 6:
            break;
            default: printf("Invalid choice");
        }
    } while (choice != 6);
    
}
    
typedef struct {
    int r;
    int i;
} ComplexInt;

void program2()
{
    ComplexInt a, b;
    int choice;
    do {
        printf("\n1.Add 2.Subtract 3.Multiply 4.Exit\n");
        scanf("%d", &choice);
        
        if (choice >= 1 && choice <= 3) {
            printf("Enter real and imaginary parts of first number: ");
            scanf("%lf%lf", &a.r, &a.i);
            printf("Enter real and imaginary parts of second number: ");
            scanf("%lf%lf", &b.r, &b.i);
        }
        switch (choice) {
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
    } while (choice != 4);
}


void main()
{
    program2();
}