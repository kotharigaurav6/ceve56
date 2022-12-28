// Program showing the concept of function
#include<stdio.h>

void addition() // function definition
{
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

        printf("Addition : %d\n",a+b);
}

void main()
{
    addition(); // function calling
}

