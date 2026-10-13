#include <stdio.h>
#include <ctype.h>
 
int classify(int c)
{
    if(isalpha((unsigned char)c))
    {
        return 1;
    }
 
    if(isdigit((unsigned char)c))
    {
        return 2;
    }
 
    return 3;
}
 
int main()
{
    int c;
    int a = 0, d = 0, s = 0;
 
    printf("Enter a line of text: ");
 
    while((c = getchar()) != '\n' && c != EOF)
    {
        int type = classify(c);
 
        if(type == 1)
        {
            a++;
        }
        else if(type == 2)
        {
            d++;
        }
        else if(!isspace((unsigned char)c))
        {
            s++;
        }
    }
 
    printf("Alphabets = %d\n", a);
    printf("Digits = %d\n", d);
    printf("Special symbols = %d\n", s);
 
    return 0;
}
