/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int c=0,num,rem;
    printf("enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;
        if(rem==1)
        {
            c++;
        }
        num=num/2;
    }
    printf("%d",c);
    return 0;
}

