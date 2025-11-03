#include <stdio.h>
#include <stdlib.h>
int main()
{ // use of malloc()
    int *ptr;
    int n;
    printf("Enter the up to value you want to print : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 1; i < n; i++)
    {
        printf("Enter the value of array %d : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        printf("Enter the value of array %d is %d \n", i, ptr[i]);
    }
    free(ptr);

    // use of calloc it gat garbage value of 0
    //  int *ptr;
    // int n;
    printf("Enter the up to value you want to print : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value of array %d : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value of array %d is %d \n", i, ptr[i]);
    }
    // return 0;

    // use of realloc
    //   int *ptr;
    //  int n;
    printf("Enter the up to value you want to print : ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value of array %d : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the value of array %d is %d \n", i, ptr[i]);
    }

    free(ptr);
    return 0;
}