// Program to find out all the armstrong numbers between two entered numbers
#include<stdio.h>
#include<math.h>
void main()
{
    int i,num,sum,count,rem,temp,temp1,temp2,n,m;
    printf("Enter initial and final number : ");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
            temp = i;
            temp1 = i;
            temp2 = i;
            sum=0;
            count=0;
        while(temp>0)
        {
            temp=temp/10;
            count++;
        }
        while(temp1>0)
        {
            rem = temp1%10;
            sum=sum+pow(rem,count);
            temp1=temp1/10;
        }
        if(temp2==sum)
            printf("%d\t",i);
    }
}

