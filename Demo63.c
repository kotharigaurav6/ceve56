// program showing the concept of call by value
#include<stdio.h>
/* function definition */
void swap(int a,int b)
{
    int temp;
        temp=a;
        a=b;
        b=temp;
    printf("\nAfter swapping in swap : \n"); 
    printf("a : %d\n",a);
    printf("b : %d\n",b);    
}
void main()
{
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

    printf("\nBefore swapping : \n"); 
    printf("a : %d\n",a);
    printf("b : %d\n",b);

            swap(a,b); // function calling

    printf("\nAfter swapping in main : \n"); 
    printf("a : %d\n",a);
    printf("b : %d\n",b);
}