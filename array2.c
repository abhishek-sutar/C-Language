#include<stdio.h>
int main()
{
    int marks[4];
    for(int i=0 ; i<4 ; i++)
    {
     printf("Enter the number of array %d is :",i);
        scanf("%d", &marks[i]);
        
    }
    for(int i=0 ; i<4 ; i++)
    {
     printf("The value of %d element of the arry is : %d\n ",i , marks [i]);
    }

   return 0; 
}