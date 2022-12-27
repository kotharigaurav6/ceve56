// Program to find out all the perfect numbers between two entered numbers
#include<stdio.h>
void main()
{
    int num,i,sum,n,m,j;
        printf("Enter initial and final number : ");
        scanf("%d%d",&n,&m);
        for(j=n;j<=m;j++)
        {
            sum=0;
            for(i=1;i<=j/2;i++)
            {
                if(j%i==0)
                sum=sum+i;
            }
            if(sum==j)
                printf("%d\t",j);
        }
}

