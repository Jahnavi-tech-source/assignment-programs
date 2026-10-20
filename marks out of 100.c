/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mark;
    
    printf("enter the mark out of 100");
    scanf("%d",&mark);
    
    if(mark < 0 || mark > 100)
    {
        printf("Invalid mark");
    }
    else if (mark >= 90)
    {
        printf("Grade O");
    }
    else if (mark >= 80)
    {
        printf("Grade A+");
    }
    else if (mark >= 70)
    {
        printf("Grade A");
    }
    else if (mark >= 60)
    {
         printf("Grade B");
    }
     else if (mark >= 50)
    {
        printf("Grade C"); 
    }
    else 
    {
        printf("Fail");
    }

    return 0;
}
