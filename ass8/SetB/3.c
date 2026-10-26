#include <stdio.h>

int countChar(char str[], char ch)
{
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str[100], ch;
    int count;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    count = countChar(str, ch);

    printf("Character occurs %d times\n", count);

    return 0;
}