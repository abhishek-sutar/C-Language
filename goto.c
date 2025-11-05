#include<stdio.h>
int main()
{
    int k, i =0;
    for(;i<5;i++)  //outer loop
    {
        printf("%d\n",i);
        for(int j=0; j<8 ; j++)  // inner loop
        {
            printf("Enter your digit press 0 to exit");
            scanf("%d", &k);
            if(k==0){ // if the value of inner os zero it get exit
                // It will run untill
                goto end;// it go to end if program
            }else{
                printf("%d\n",i);
                i++;
            }
        }
    }
    end:
    printf("Hello world");
    return 0;
}