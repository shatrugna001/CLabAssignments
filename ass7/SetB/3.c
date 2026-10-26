#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[200];
    int choice, result;

    do
    {
        printf("\n--- STRING MENU ---\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenation\n");
        printf("4. Compare\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                printf("Length = %d\n", (int)strlen(str1));
                break;

            case 2:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                strcpy(str2, str1);

                printf("Copied string = %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                strcat(str1, str2);

                printf("Concatenated string = %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                result = strcmp(str1, str2);

                if(result == 0)
                {
                    printf("Strings are equal\n");
                }
                else if(result > 0)
                {
                    printf("First string is greater\n");
                }
                else
                {
                    printf("Second string is greater\n");
                }

                break;

            case 5:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}