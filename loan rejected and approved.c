/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age , credit_score;
    float income;
    
    printf("enter age: ");
    scanf("%d",&age);
    
    printf("enter montly income: ");
    scanf("%d",&income);

    printf("enter credit score: ");
    scanf("%d",&credit_score);
    
    if(age >= 21 && age <= 60)
    {
        printf("Loan rejected: age not in 21 to 60");
    }
    else if(income < 25000)
    {
        printf("Loan rejected: income below Rs. 25000");
    }
    else if(credit_score < 700 )
    {
        printf("Loan rejected: credit score below 700");
    }
    else
    {
        printf("Loan approved");
    }

    return 0;
}
