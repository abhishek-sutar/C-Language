#include<stdio.h>
//#include<string.h>
void main ()
{
    int i, j , row , space;
    printf("Enter The no. of rows");
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        for(space=1;space<=(row-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

