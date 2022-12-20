// Program showing the concept of nested loop
#include<stdio.h>
void main()
{
    int i,j;
        for(i=1;i<=3;i++) // outer loop
        {
            printf("i : %d\n",i);
            for(j=1;j<=3;j++) // inner loop
            {
                printf("\tj : %d\n",j);
            }
        }
}





