// Program to swap two numbers using third variable
#include<stdio.h>
void main()
{
    int a,b,temp;
        printf("Enter values of a and b : ");
        scanf("%d%d",&a,&b);

        printf("Before swapping : \n");
        printf("a : %d\n",a);
        printf("b : %d\n",b);

            temp=a;
            a=b;
            b=temp;
        
        printf("After swapping : \na : %d\nb : %d\n",a,b);
}

