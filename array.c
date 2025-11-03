#include<stdio.h>
#include<string.h>
int main ()
{
    int arr[5];1
    for(int i=0;i<5;i++)
    {
        printf("Enter %d number:",i);
        scanf("%d",&arr[i]);
    }
    //int arr[5]={1,8,6,3,7};
    //printf("%d",arr[0]);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }


    return 0;
}
