  
#include <stdio.h>  
  
int main()  
{  
    int side1, side2, side3; 

   
    int valid = 0;
  
     
    printf("Enter three sides of triangle: \n");  
    scanf("%d%d%d", &side1, &side2, &side3);  
      
    if((side1 + side2) > side3)  
    {  
        if((side2 + side3) > side1)  
        {  
            if((side1 + side3) > side2)
            {  
                
                valid = 1;
            }  
        }
    }  
    
   
    if(valid == 1)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
  
    return 0;  
}