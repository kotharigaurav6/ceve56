// Program to convert temp from f to c
#include<stdio.h>
void main()
{
    float f,c;
    printf("Enter temp in f : ");
    scanf("%f",&f);

        c = (f-32)*5/9;
        printf("Temp in c : %.2f\n",c);
}

