// Program showing the concept of switch control statement
#include<stdio.h>
void main()
{
    int a,b,code;
        printf("Enter values of a and b : ");
        scanf("%d%d",&a,&b);
        printf("---select operation---\n");
        printf("1 for Add\n");
        printf("2 for Sub\n"); 
        printf("3 for Exit\n");
        printf("Enter code : ");
        scanf("%d",&code);
        switch(code)
        {
           case 1 : printf("Add : %d\n",a+b);
                    break;      
           case 2 : printf("Sub : %d\n",a-b); 
                    break;     
           case 3 : printf("Exit\n");
                    break;
            default : printf("Invalid selection\n");
                        break;      
        }
}





