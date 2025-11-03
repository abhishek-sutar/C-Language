#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int chars, i=0;
    char *ptr;
    while(i<3)
    {
        printf("Enter the charactoers in ypur employee id\n", i+1);
        scanf("%d", &chars);
        ptr = (char *) malloc((chars+1)*sizeof(chars));
        scanf("%s",ptr);
        printf("your Employee Id is %s\n ", ptr);
        i = i+1 ;
    }
    return 0;
}