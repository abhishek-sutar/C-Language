#include<stdio.h>
#include<string.h>
int main ()
{
    int saraly;
    printf("Enter the gross salary:");
    scanf("%d",&saraly);
    float hra,da,sum;
    if(saraly<=10000)
    {
        hra=saraly*0.2;
        da=saraly*0.8;
    }
    else if(saraly<=20000)
    {
        hra=saraly*0.25;
        da=saraly*0.9;
    }
    else
    {
        hra=saraly*0.3;
        da=saraly*0.95;
    }
    sum = hra + da ;
    printf("The Saraly is %f", sum);
    return 0;
}