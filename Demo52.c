// Program to find out the factorial of a number (With argument No return type)
#include<stdio.h>
// function definition
void factorial(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial : %d\n",fact);
}
void main()
{
    int num;
        printf("enter number : ");
        scanf("%d",&num);
            factorial(num); 
}
