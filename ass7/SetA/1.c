#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int len;

    printf("Enter a string: ");
    scanf(" %[^\n]", str1);

    strcpy(str2, str1);

    len = strlen(str2);

    printf("Copied string = %s\n", str2);
    printf("Length of copied string = %d\n", len);

    return 0;
}