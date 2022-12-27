// Program to check whether entered number is armstrong or not
#include<stdio.h>
#include<math.h>
void main()
{
    int num,sum=0,count=0,rem,temp,temp1;
    printf("Enter number : ");
    scanf("%d",&num);
        temp = num;
        temp1 = num;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    while(temp>0)
    {
        rem = temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    }

    if(temp1==sum)
        printf("Number is armstrong\n");
    else
        printf("Number is not armstrong\n");
}

