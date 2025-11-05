#include<stdio.h>

int swap(int* x , int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp; 
    return 0 ;
}
int main()
{
    int a , b ;
    printf("Enter The NUmber you mant to swap A And B : ");
    scanf("%d \n %d", &a , &b);// taking the inpurt value
    swap( &a , &b); //call by refrence the value by &&
    printf("The Value of A and B is now A = %d and B = %d", a , b ); 
    return 0;
}