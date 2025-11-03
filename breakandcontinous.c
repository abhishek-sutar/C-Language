#include<stdio.h>
int main()
{
    int num;
    for(num=0;num<10;num++)
    {
       printf("Enter your age");
       scanf("%d", &num);
       if(num<8){
        continue;  //If the word say continous the loop repit itself
       }
       printf("What are you doing");

    }
    return 0;
}