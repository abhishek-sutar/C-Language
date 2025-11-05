//Write a C program to Check whether a number is negative, positive or zero
#include<stdio.h>

int main()
{
   int num;
   printf("enter the number : ");
   scanf("%d", &num);

if(num>0)
{ 
   printf("number is positive");
 }
 if(num<0)
 {
   printf("number is negative");
 }

 if(num == 0)
 {
   printf("number is zero");
 }
 return 0;
}