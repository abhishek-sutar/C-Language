//Write a C program to Check whether a number is divisible by 5 and 11 or not.

#include <stdio.h>

int main()
{
    int num;
    printf("enter any number : ");
    scanf("%d" , &num);

    if((num % 5 == 0) && (num % 11 == 0))    
    {
        printf("yes ,number is divisible by 5 and 11");
    }
    else
    {
        printf("no , number is not divisible by 5 and 11");
    }
    return 0;
}