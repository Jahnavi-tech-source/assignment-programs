/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float amount , discount=0 ,  delivery=0 , finalamount;
    int membership;
    
    printf("enter order amount: ");
    scanf("%f",&amount);
    
    printf("enter membership type(1 for premium,0 for regular): ");
    scanf("%d",&membership);
    
    if(amount >= 500)
    {
        delivery = 0;
        
        if(membership == 1)
        {
            discount = amount * 0.10;
        }
    }
    else
    {
        delivery = 50;
    }
       finalamount = amount - discount + delivery;
       
       printf("Final amount= Rs.%.2f\n",finalamount);

    return 0;
}
