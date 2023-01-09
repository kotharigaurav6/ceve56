// program showing the concept of pointer
#include<stdio.h>
void main()
{
    int a,*ptr;
    printf("Enter value of a : ");
    scanf("%d",&a);

    printf("Value of a : %d\n",a);
    printf("Address of a : %u\n",&a);

    ptr = &a;
    printf("Address of ptr : %u\n",&ptr);
    printf("Address which ptr holds : %u\n",ptr);
    printf("value which *ptr holds : %d\n",*ptr);
    
}