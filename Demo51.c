// Program to find out the factorial of a number (No argument with return type)
#include<stdio.h>
// function definition
int factorial()
{
    int i,fact=1,num;
    printf("enter number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
void main()
{
//  int res = factorial();      // function calling
//  printf("Factorial : %d\n",res);   
printf("Factorial : %d\n",factorial());
}
