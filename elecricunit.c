#include<stdio.h>
#include<string.h>
int main ()
{
    int unit,amt;
    printf("Enter the unit");
    scanf("%d",&unit);
    if(unit<=50)
    {
        amt = unit *0.50;
    }
    else if(unit<=150)
    {
        amt = 25 +((unit-50)*0.75);
    }
    else if(unit<=250)
    {
        amt = 100 + ((unit-150)*1.2);
    }
    else 
    {
        amt = 220 + ((unit-250)*1.5);
    }

    float surcharge = amt * 0.20;
    float total_amt = amt + surcharge;
    printf("Electric bill %f",total_amt);
    return 0;
}