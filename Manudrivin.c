#include<stdio.h>
int main ()
{
    char ch;
    int num ,a,b, cho;
    printf("Enter Y/N for Calculator");
    scanf("%c",&ch);

    while(ch=='Y')
    {
        printf("Enter the two number");
        scanf("%d%d",&a, &b);
        printf("1. Add\n 2. Sub\n 3. Mul\n 4. Div\n 5. Exit \n");
        printf("Enter the choice");
        scanf("%d", &cho);
        switch (cho)
        {
        case 1:
            printf("The sum is : %d \n", a+b);
            break;
        case 2:
            printf("The sub is : %d\n", a-b);
            break;
        case 3:
            printf("The mul is : %d\n", a*b);
            break;
        case 4:
            printf("The div is : %f\n",(float)a/b);
            break;
        case 5:
        goto end;
            break;
        
        default:
        printf("Wrong input");
        goto end;
            break;
        }
    }
        end:
    printf("Exiting the program ");

    return 0;
}