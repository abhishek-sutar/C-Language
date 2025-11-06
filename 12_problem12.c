//Write a C program to input month number and print number of days in that month.
#include <stdio.h>

int main()
{
    int month;
    printf("enter the month number from (1-12) : ");
    scanf("%d" , &month);

    if (month == 1)
    {
        printf("days = 31");
    }
    else if (month == 2)
    {
        printf("days == 28 or 29");
    }
    else if (month == 3)
    {
        printf("days == 31");
    }
    else if (month == 4)
    {
        printf("days == 30");
    }
    else if (month == 5)
    {
        printf("days == 31");
    }   
    else if (month == 6)
    {
        printf("days == 30");
    }    
    else if (month == 7)
    {
        printf("days == 31");
    }    
    else if (month == 8)
    {
        printf("days == 31");
    }    
    else if (month == 9)
    {
        printf("days == 30");
    }    
    else if (month == 10)
    {
        printf("days == 31");
    }    
    else if (month == 11)
    {
        printf("days == 30");
    }    
    else if (month == 12)
    {
        printf("days == 31");
    }

    else
    {
        printf("Invalid input! Please enter month number between (1-12).");

    }
    return 0;

}