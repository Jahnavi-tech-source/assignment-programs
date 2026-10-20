/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int userID, password;
    
    printf("enter userID: ");
    scanf("%d",&userID);
    
    if(userID != 101)
    {
        printf("user is not found");
    }
    else
    {
        printf("enter password: ");
        scanf("%d",&password);
        
        if(password == 4321)
        {
            printf("login successful");
        }
        else
        {
            printf("incorrect password");
        }
    }

    return 0;
}
