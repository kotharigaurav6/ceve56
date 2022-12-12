// Program a^b
#include<stdio.h>
#include<math.h>
void main()
{
    int b,e; // variable declaration
    printf("Enter base and exponent : ");
    scanf("%d%d",&b,&e); 

    printf("Result : %.2f\n",pow(b,e));
}

