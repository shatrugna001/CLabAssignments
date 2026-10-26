#include <stdio.h>

void uppercase(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    uppercase(str);

    printf("Uppercase string = %s\n", str);

    return 0;
}