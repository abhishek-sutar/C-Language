#include<stdio.h>
//#include<string.h>
int main ()
{
    int i, n ;
    printf("Enter the number that you want to find the prime number");
    scanf("%d",&n);
    for(i = 2 ; i<=n/2 ; i++)
    {
        if(n%i == 0)
        {
            break; 
        }
    }
    if(i>n/2 && n>1 )
    {
        printf("The number %d is prime number " , n);
    }
    else{
        printf("The number %d is not a prime number " , n);
    }
    return 0;

}