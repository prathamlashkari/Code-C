#include <stdio.h>

int main()
{

    int year;
    scanf("%d",&year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("YEAR is leap year");
            }
            else
            {
                printf("YEAR is not leap year");
            }
        }
        else
        {
            printf("YEAR is leap year");
        }
    }
    else
    {
        printf("YEAR is not leap year");
    }
    return 0;
}