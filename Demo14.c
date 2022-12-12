// Program to find out area of triangle
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c; // variable declaration
    float s,area,val;
    printf("Enter length of all the three sides : ");
    scanf("%d%d%d",&a,&b,&c); 

    s = (a+b+c)/2;
    val = s*(s-a)*(s-b)*(s-c);
    area = sqrt(val);
    printf("Area : %.2f\n",area);

}

