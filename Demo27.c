// Program to reverse a three digit number
#include<stdio.h>
void main()
{
    int rev,num,first,middle,last;
    printf("Enter three digit number : ");
    scanf("%d",&num);
    if(num>99 && num<1000)
    {
        last = num%10;
        middle = (num/10)%10;
        first = num/100;
        rev = last*100 + middle*10 + first*1;
        printf("Reverse Number : %d\n",rev);
    }
    else
        printf("Not a three digit number\n");
}