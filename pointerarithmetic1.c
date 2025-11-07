#include<stdio.h>
int main()
{
    int  a = '5';
    int * ptra = &a ;
    printf ("%d\n",ptra);
    printf ("%d\n",ptra + 1);
    printf ("%d\n",ptra + 2); 
    int arr[]={5,6,9,8,50};
    printf("The value of first element is %d\n", &arr[0]);// it give the addre of arr
    printf("The value of first element is %d\n", arr);  // it give the addre of arr
    printf("The value of first element is %d\n", &arr[3]);   // it give the addre of arr
    printf("The value of first element is %d\n", *(&arr));        // it give the addre of arr because the it does not spicifies the element
    printf("The value of first element is %d\n", *(&arr[4])); // the element is spacifies
    printf("The value of first element is %d\n", *(&arr[3]));
    printf("The value of first element is %d\n", *(&arr[2]));
    printf("The value of first element is %d\n", *(arr + 4)); // Giveing the value

    return 0;
}