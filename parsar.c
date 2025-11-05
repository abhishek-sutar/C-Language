#include<stdio.h>
#include<string.h>
void parser(char *string)
{
    int in= 0 ; // variable to track wather the element is position
    int indix = 0 ;
    for(int i =0 ; i<strlen(string); i++)
    {
        if(string[i]=='<')
        {
            in= 1 ;
            continue;
        }
        else if(string[i]=='>')
        {
            in = 0;
            continue;
        }
        if(in == 0)
        {
            string[indix] = string[i];
            indix ++;
        }

    }
    string[indix] = '\0';
    // it is use to remove remaing spaces
    while(string[0]== ' ')
    {
        for(int i=0 ; i<strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    while(string[strlen(string) - 1 ]== ' ')
    {
        string[strlen(string) - 1 ] = '\0';
    }

}
int main()
{
    char string[]= "<h1>           the name is abhishek          </h>";
    parser(string);
    printf("the give data is  ~~%s~~ ", string);
    return 0;

}