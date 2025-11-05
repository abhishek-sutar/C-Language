//Write a C program to Check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>

int main()
{
    char ch;
    printf("enter any charecter : ");
    scanf("%c" ,&ch );

    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is an lower case charecter\n", ch);
    }
    else if(ch >= 'A' && ch <= 'z')
    {
        printf("%c is an upper case charecter\n", ch);
    }
    else
    {
        printf("%c is a special charecter or number\n", ch);
    }
    return 0;
}