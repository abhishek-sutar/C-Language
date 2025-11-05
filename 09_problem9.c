//Write a C program to Input any character and check whether it is alphabet, digit or special character.
#include <stdio.h>
int main()
{
    char ch;
    printf("enter any charecter : ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' )
    {
        printf("%c is an alphabet\n",ch );
    }
    else if (ch >= '0' && ch <='9')
    {
        printf("%c is an number\n",ch);
    }
    else
    {
        printf("%c is a special charecter\n",ch);
    }
    return 0;
}