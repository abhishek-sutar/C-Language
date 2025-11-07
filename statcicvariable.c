#include<stdio.h>
int x = 90; // globle variable it can use eveary ware by same name give local variable function pref
int stat(int num) // num is formal argument we need to give the value of costant if not given it take as 
{
//  int b = num * num ;
//  return b;
printf("In func %d : ", x);
static int b = 5; // it value remember the value of itself for next work
b++;
return b;
}
int main()
{
    int a = 50 ; // a is local variable it is access within given function untill use of pointer
    int k , b ;
    printf("In main %d : ", x);
    printf("Enter the value to multiply ");
    scanf("%d", &k);
    b= stat(k);
    printf("The value of func is : %d \n", b );
    b= stat(k);
    printf("The value of func is : %d \n", b );
    b= stat(k);
    printf("The value of func is : %d \n", b );
    stat(k);
    b= stat(k);
    printf("The value of func is : %d \n", b );
    return 0;


}
