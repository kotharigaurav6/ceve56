// Program to swap two numbers WITHOUT using third variable
#include<stdio.h>
void main()
{
    int a,b;
        printf("Enter values of a and b : ");
        scanf("%d%d",&a,&b);

        printf("Before swapping : \n");
        printf("a : %d\n",a);
        printf("b : %d\n",b);

           a=a+b;
           b=a-b;
           a=a-b;
           
        printf("After swapping : \na : %d\nb : %d\n",a,b);
}

