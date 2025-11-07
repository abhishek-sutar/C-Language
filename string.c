#include<stdio.h>
int main()
{
    char na[6]= {'h','e','l','l','o'};
    printf("%s", na);
    char name[] = "\nHello My name is Abhishek \n";
    printf("%s", name); 
    printf("Enter the string you want to insert \n");
    char str[55];
    gets(str); // it si use to take the string from user
    printf("You Enter the give string : %s ", str );
    puts(str); // it is use for printing the value
    return 0;
}