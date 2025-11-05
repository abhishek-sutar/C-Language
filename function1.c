#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a, b, c;
    printf("Enter the valur off a and b");
    scanf("%d %d", &a , &b);// Thaking both inputes
    c = sum(a , b);// giving the funtionn to value
    printf("the value you want to add is:%d ", c);
    return 0;
}
