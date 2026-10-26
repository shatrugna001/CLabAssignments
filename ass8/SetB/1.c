#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    char *p, *q;
    int flag = 0;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    p = str1;
    q = str2;

    while(*p != '\0' || *q != '\0')
    {
        if(*p != *q)
        {
            flag = 1;
            break;
        }

        p++;
        q++;
    }

    if(flag == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    return 0;
}