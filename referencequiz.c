#include<stdio.h>

void swap(int* x , int* y)
{
    
    *x = *x + * y ;
    
    * y = * x - * y ;

    *x = *x - *y ;
    return ;

    
}
int main()
{
    int a , b ;
    printf("Enter The NUmber you mant to swap A And B : ");
    scanf("%d \n %d", &a , &b);
    swap( &a , &b);
    printf("The Value of A and B is now A = %d and B = %d", a , b ); 
    return 0;
}