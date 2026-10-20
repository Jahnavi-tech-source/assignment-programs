/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float weight , height , bmi;
    
    printf("enter weight in Kg: ");
    scanf("%f",&weight);

    printf("enter height in meters: ");
    scanf("%f",&height);

    bmi = weight / (height * height);
     
    printf("bmi = %.2f\n",bmi);
    
    if(bmi < 18.5)
    {
        printf("underweight");
    }
    else if(bmi < 25)
    {
        printf("normal");
    }
    else if(bmi < 30)
    {
        printf("over weight");
    }
    else
    {
        printf("obese");
    }
    return 0;
}
