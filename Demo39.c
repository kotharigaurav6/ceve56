// Program 
#include<stdio.h>
void main()
{
int row,i,j,sp;
printf("enter rows : ");
scanf("%d",&row);

        for(i=1;i<=row;i++) // outer loop
        {
            for(sp=1;sp<=row-i;sp++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++) // inner loop
            {
                if(j==1 || i==j || i==row)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
}





