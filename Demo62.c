// program showing the concept of pointer to pointer
#include<stdio.h>
void main()
{
    int a,*ptr,**ptr1;
    printf("Enter value of a : ");
    scanf("%d",&a);

    printf("Value of a : %d\n",a);
    printf("Address of a : %u\n",&a);

    ptr = &a;
    printf("Address of ptr : %u\n",&ptr);
    printf("Address which ptr holds : %u\n",ptr);
    printf("value which *ptr holds : %d\n",*ptr);
    
    ptr1 = &ptr;
    printf("\nAddress of ptr1 : %u\n",&ptr1);
    printf("Address which ptr1 holds : %u\n",ptr1);
    printf("Address at address which ptr1 holds : %u\n",*ptr1);
    printf("value which **ptr1 holds : %d\n",**ptr1);
}