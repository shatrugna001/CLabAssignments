#include <stdio.h>
#include <math.h>
 
int main()
{
    int choice;
    double x;
 
    do {
        printf("\n1.Sine 2.Cosine 3.Log 4.Exp 5.Sqrt 6.Exit\n");
        scanf("%d", &choice);
 
        if(choice >= 1 && choice <= 5)
        {
            printf("Enter x: ");
            scanf("%lf", &x);
        }
 
        switch(choice)
        {
            case 1:
                printf("%.4f\n", sin(x));
                break;
 
            case 2:
                printf("%.4f\n", cos(x));
                break;
 
            case 3:
                if(x > 0)
                {
                    printf("%.4f\n", log(x));
                }
                else
                {
                    printf("x must be positive");
                }
                break;
 
            case 4:
                printf("%.4f\n", exp(x));
                break;
 
            case 5:
                if(x >= 0)
                {
                    printf("%.4f\n", sqrt(x));
                }
                else
                {
                    printf("x must be non-negative");
                }
                break;
 
            case 6:
                break;
 
            default:
                printf("Invalid choice");
        }
    } while(choice != 6);
 
    return 0;
}
