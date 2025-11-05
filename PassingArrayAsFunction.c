#include<stdio.h>
int fuc(int array[]) // it gives the value off by array
{
    for (int i= 0 ; i<5 ; i++)
    {
        printf ("The value of %d ia %d \n", i , array[i]);
    }
    //array[0]= 354;The value of base array will change by changeing the value into main funtion
    return 0 ;
}
int fuc2(int* ptr) // it use by pointer value
{
    for (int i= 0 ; i<4 ; i++)
    {
        printf ("The vale of %d ia %d \n", i , *(ptr + i));
    }
    *(ptr + 2 ) = 632;
    return 0 ;
}

int main()
{
    int sum;
    int arr[] = { 1 , 2 , 3 , 5 , 90 };
    printf("The value of base Array is %d \n", arr[0]);

    fuc(arr);
    printf("The value of base Array is %d \n", arr[0]);
    fuc2(arr);
    printf("The value of base Array is %d \n", arr[2]);

    return 0;
}