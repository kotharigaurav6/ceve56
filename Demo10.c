// Program to find out perimeter of rectangle
#include<stdio.h>
void main()
{
    int l,b,p; // declaration
    printf("Enter length : ");
    scanf("%d",&l); 

    printf("Enter breadth : ");
    scanf("%d",&b); 

        p = 2*(l+b); // formula implementation
        printf("Perimeter : %d\n",p);
}

