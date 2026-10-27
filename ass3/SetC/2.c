// Write a function that accepts a character as parameter and returns 1 if it is an alphabet, 2 if
// it is a digit and 3 if it is a special symbol. In main, accept characters till the user enters
// EOF and use the function to count the total number of alphabets, digits and special symbols
// entered.

#include <stdio.h>

int classify(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return 1;

    else if (ch >= '0' && ch <= '9')
        return 2;
        
    else
        return 3;
}

int main()
{
    char ch;
    int a = 0, d = 0, s = 0, type;

    printf("Enter a line of text: ");

    while ((ch = getchar()) != '\n')
    {
        type = classify(ch);

        if (type == 1)
            a++;
        else if (type == 2)
            d++;
        else if (ch != ' ')
            s++;
    }

    printf("Alphabets = %d\n", a);
    printf("Digits = %d\n", d);
    printf("Special symbols = %d\n", s);

    return 0;
}
