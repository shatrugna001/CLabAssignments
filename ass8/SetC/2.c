#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;
    int visited[100] = {0};

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            continue;
        }

        if(visited[i] == 1)
        {
            continue;
        }

        count = 1;

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j] ||
               (str[i] >= 'A' && str[i] <= 'Z' &&
                str[i] + 32 == str[j]) ||
               (str[i] >= 'a' && str[i] <= 'z' &&
                str[i] - 32 == str[j]))
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("Character %c occurs %d times\n",
               str[i], count);
    }

    return 0;
}