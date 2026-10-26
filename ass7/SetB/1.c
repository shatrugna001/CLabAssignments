#include <stdio.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '*';
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            str[i] = '?';
        }
    }

    printf("Modified string = %s\n", str);

    return 0;
}