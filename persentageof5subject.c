#include<stdio.h>
#include<string.h>
int main ()
{
    int math,eng,phy,chem,comp;
    printf("Enter marks of 5 subjects out of 100:");
    scanf("%d%d%d%d%d",&math,&eng,&phy,&chem,&comp);
    int total=math+eng+phy+chem+comp;
    float percentage=(total/500.0)*100;
    if(percentage>=90)
    {
        printf("Grade A");
    }
    else if(percentage>=80)
    {printf("Grade B");}
    else if(percentage>=70)
    {printf("Grade C");}
    else if(percentage>=60)
    {
        printf("Grade D");
    }
    else if(percentage>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}