#include <stdio.h>

int length(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    len = length(str);

    printf("Length of string = %d\n", len);

    return 0;
}