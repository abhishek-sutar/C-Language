#include<stdio.h>
#include<string.h>
int main ()
{
    int i=0 , j=0;
    int arr[2] [2]= {{9,9} , {9,6}};  //It is a 2D matrix type question input
    int arr2[2] [2]= {{1,2} , {3,4}};  //Second 2D matrix
    printf("The sum of two 2D arrays is:\n");
    for (i=0 ; i<2; i++)         //outer loop
    {
        for (j=0 ; j<2 ;j++)    //inner loop
        {
            printf("array[%d] [%d] = [%d]\n", i+1 , j+1 ,arr[i][j] + arr2[i][j]);  //initialization and sum of two arrays
        }
    }
    return 0;
}