#include<stdio.h>
void hi(int arry[])
{
    int temp;
    for( int i = 0 ; i< 7/2 ; i++)
    {
        temp = arry[i];
        arry[i] = arry[6-i];
        arry[6 - i] = temp;

    }
}
int main()
{
    int arr[]= {1,5,3,63, 2 , 9 , 5};
    for(int i=0 ; i< 7 ; i++ )
    {
        printf("The array of given %d is %d  \n", i , arr[i]);
    }
    hi(arr);
    printf("Result after array is \n");
     for(int i=0 ; i< 7 ; i++ ){printf("The array of given %d is %d \n", i , arr[i]); }
    return 0;
}