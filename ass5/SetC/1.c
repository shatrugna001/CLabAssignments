#include <stdio.h>

int leapYear(int y)
{
    if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    {
        return 1;
    }

    return 0;
}

int monthDays(int m, int y)
{
    if(m == 2)
    {
        if(leapYear(y))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }

    if(m == 4 || m == 6 || m == 9 || m == 11)
    {
        return 30;
    }

    return 31;
}

void addDays(int *dd, int *mm, int *yy, int days)
{
    while(days > 0)
    {
        (*dd)++;

        if(*dd > monthDays(*mm, *yy))
        {
            *dd = 1;
            (*mm)++;

            if(*mm > 12)
            {
                *mm = 1;
                (*yy)++;
            }
        }

        days--;
    }
}

int main()
{
    int dd, mm, yy, days;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &dd, &mm, &yy);

    printf("Enter number of days to add: ");
    scanf("%d", &days);

    if(yy < 1 || mm < 1 || mm > 12 ||
       dd < 1 || dd > monthDays(mm, yy) || days < 0)
    {
        printf("Invalid date or number of days\n");
        return 1;
    }

    addDays(&dd, &mm, &yy, days);

    printf("New date = %02d-%02d-%04d\n", dd, mm, yy);

    return 0;
}