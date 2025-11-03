#include<stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter the number you want to print: ");
    scanf("%d", &num);
     
    do{
        printf("%d\n",index + 1);
        index = index + 1;

    }while(index<num); // the value is always work untill the value is num=index value
    return 0;

}