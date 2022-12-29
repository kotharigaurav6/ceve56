// Program to find out the factorial of a number (With argument with return type)
#include<stdio.h>
// function definition
int factorial(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
    int num;
        printf("enter number : ");
        scanf("%d",&num);
          printf("Factorial : %d\n",factorial(num)); 
}
