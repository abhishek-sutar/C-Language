#include<stdio.h>
int main()
{
    int i=0 , j=0 ;
    int arr[2][2] = {{9,9} , {9,6}};  //It is an 2D matrix type question intput
    for (i=0 ; i<2; i++)         //outer loop
    {
        for (j=0 ; j<2 ;j++)    //inner loop
        {
            printf("array[%d] [%d] = [%d]\n", i , j ,arr[i][j]);  //initilization
        }
    }
    printf("\n Printing the value...");
    for(int i=0; i<2 ; i++)
    {
        printf("\n");         //for spacing
        for(j=0 ; j<2 ; j++){
            printf("%d\t",arr[i][j]); //printing the value 
        }
    }
    return 0;
}