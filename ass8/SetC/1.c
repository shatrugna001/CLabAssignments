#include <stdio.h>

int main()
{
    char str1[200], str2[100], temp[200];
    int choice, i, j, len;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    do
    {
        printf("\n--- STRING MENU ---\n");
        printf("1. Copy\n");
        printf("2. Concatenate\n");
        printf("3. Length\n");
        printf("4. Reverse\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                i = 0;

                while(str1[i] != '\0')
                {
                    temp[i] = str1[i];
                    i++;
                }

                temp[i] = '\0';

                printf("Copied string = %s\n", temp);
                break;

            case 2:
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                i = 0;

                while(str1[i] != '\0')
                {
                    i++;
                }

                j = 0;

                while(str2[j] != '\0')
                {
                    str1[i] = str2[j];
                    i++;
                    j++;
                }

                str1[i] = '\0';

                printf("Concatenated string = %s\n", str1);
                break;

            case 3:
                len = 0;

                while(str1[len] != '\0')
                {
                    len++;
                }

                printf("Length = %d\n", len);
                break;

            case 4:
                len = 0;

                while(str1[len] != '\0')
                {
                    len++;
                }

                printf("Reversed string = ");

                for(i = len - 1; i >= 0; i--)
                {
                    printf("%c", str1[i]);
                }

                printf("\n");
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