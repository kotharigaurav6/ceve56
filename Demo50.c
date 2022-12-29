// Program to find out the factorial of a number (No argument no return type)
#include<stdio.h>

// function definition
void factorial()
{
    int i,fact=1,num;
    printf("enter number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial : %d\n",fact);
}

void main()
{
 factorial();      // function calling
}
