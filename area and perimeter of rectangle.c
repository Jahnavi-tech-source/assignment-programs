/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    printf("enter a number: ");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("The number is positive");
    }
    else if(num<0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number is zero");
    }

    return 0;
}