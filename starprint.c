#include<stdio.h>
void star(int row)
{
    for(int i = 0; i<row ; i++)
    {
        for(int j = 0 ; j<=i ; j++)
        {
        printf("*");
        }
        printf("\n");
    }
}

void restar(int row)
{
    for(int i = 0; i<row ; i++)
    {
        for(int j = 1 ; j<=row - i  ; j++)
        {
        printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int row,type;
    printf(" 0 for star forword 1 for reverce pattan : \n");
    scanf("%d", &type);
    printf("How many you want to print : ");
    scanf("%d", &row);
    switch (type)
    {
        case 0:
        {
        star(row);
        break;
        }

        case 1:
        restar(row);
        break;
    }
     
    return 0;
}