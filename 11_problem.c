//C program to print day name of week

#include <stdio.h>
int main()
{
    int week;
    printf("enter the week number (1-7) \n");
    scanf("%d", &week);

    if (week == 1)
    {
        printf("the day is sunday");
    }
    else if(week == 2)
    {
        printf("the day is monday");
    }
    else if(week == 3)
    {
        printf("the day is tuesday");
    }
    else if(week == 4)
    {
        printf("the day is wednesday");
    }
    else if(week == 5)
    {
        printf("the day is thursday");
    }
    else if(week == 6)
    {
        printf("the day is friday");
    }
    else if(week == 7)
    {
        printf("the day is saturday");
    }
    else
    {
        printf("Invalid Input!");
    }
    return 0;
}