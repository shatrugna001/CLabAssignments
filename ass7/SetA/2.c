#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[100];
    int result, len;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    result = strcmp(str1, str2);

    if(result > 0)
    {
        strcat(str1, str2);
        printf("Concatenated string = %s\n", str1);
    }
    else if(result < 0)
    {
        strcat(str2, str1);
        printf("Concatenated string = %s\n", str2);
    }
    else
    {
        len = strlen(str1);
        printf("Length of string = %d\n", len);
    }

    return 0;
}