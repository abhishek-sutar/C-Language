#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d" , &age);//input
    printf("You have entered %d as yur age\n", age);
    if (age>=18) {  // If else statement
    printf("You can vote");
    }
    else if (age>=10) {
    printf("you can vote for kids");

    }
    else {
    printf("You cannot vote");
    }
    return 0;
}