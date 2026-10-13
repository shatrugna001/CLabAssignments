#include <stdio.h>
#include <ctype.h>
#include <math.h>
 
int main()
{
    int choice;
    char ch;
 
    do {
        printf("\n1.Alphabet 2.Digit cube 3.Lowercase next uppercase 4.Uppercase next lowercase 5.Exit\n");
        scanf("%d", &choice);
 
        if(choice >= 1 && choice <= 4)
        {
            printf("Character: ");
            scanf(" %c", &ch);
        }
 
        switch(choice)
        {
            case 1:
                if( ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
                {
                    printf("Alphabet");
                }
                else
                {
                    printf("Not an alphabet");
                }
                break;
 
            case 2:
                if(ch >= '0' && ch <= '9')
                {
                    printf("Cube = %.0f\n", pow(ch-'0', 3));
                }
                else
                {
                    printf("Not a digit");
                }
                break;
 
            case 3:
                if(ch >= 'a' && ch <= 'z' )
                {
                    ch = ch - 32;
                    printf("%c",ch+1);
                }
                else
                {
                    printf("Not lowercase");
                }
                break;
 
            case 4:
                if(ch >= 'A' && ch <= 'Z' )
                {
                    ch = ch + 32;
                    printf("%c",ch+1);
                }
                else
                {
                    printf("Not uppercase");
                }
                break;
 
            case 5:
                break;
 
            default:
                printf("Invalid choice");
        }
    } while(choice != 5);
 
    return 0;
}
