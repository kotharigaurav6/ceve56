// Program showing the concept of switch control statement
#include<stdio.h>
void main()
{
    int l,b;
    float r;
    char code;
  
        printf("---select operation---\n");
        printf("R/r for area of rectangle\n");
        printf("C/c for area of circle\n"); 
        printf("E/e for Exit\n");

        printf("Enter code : ");
        scanf("%c",&code);
        
        switch(code)
        {
           case 'r' :  
           case 'R' : 
                   printf("Enter values of l and b : ");
                   scanf("%d%d",&l,&b);
                   printf("Area of rectangle : %d\n",l*b); 
                   break;      
           case 'c' :          
           case 'C' : 
                   printf("Enter value of radius : ");
                   scanf("%f",&r);
                   printf("Area of circle : %.2f\n",3.14*r*r); 
                   break;      
           case 'e' :              
           case 'E' : printf("Exit\n");
                      break;
            default : printf("Invalid selection\n");
                        break;      
        }
}





