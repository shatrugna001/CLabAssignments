#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    char *ptr;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    ptr = strchr(str, ch);

    if(ptr != NULL)
    {
        printf("Character is present in the string\n");
    }
    else
    {
        printf("Character is not present in the string\n");
    }

    return 0;
}