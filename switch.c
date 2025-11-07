#include<stdio.h>
int main()
{
    int age, son;
    printf("Enter your age");
    scanf("%d", &age);
    switch (age)
    {
        case 50:
        printf("Your age is 50");
        break;
        case 60:
        printf("your age is 60\n What is your son age");
        scanf("%c",&son);
        switch (son)
        {
            case 25:
            printf("Your age is 25");
            break;
            default:
            printf("Your age is not 25");
            break;
        }
        break;
        default:
        printf("Your age is no 50 or 60");
        break;
    }
    return 0;
}