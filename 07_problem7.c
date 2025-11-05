//Write a C program to Check whether a character is alphabet or not.
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the charecter : ");
    scanf("%c" , &ch);

    if((ch >= 'a' && ch <= 'z')  || (ch >= 'A' && ch <= 'Z' ))
    {
        printf("charecter is an alphabet\n");
    }
    else
    {
        printf("charecter is not an alphabet\n");
    }
    return 0;
}