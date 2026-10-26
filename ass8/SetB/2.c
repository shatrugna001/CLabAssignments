#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, flag = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }

    return 0;
}