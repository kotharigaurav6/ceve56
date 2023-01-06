// program showing the concept of multi dimensional array
#include<stdio.h>
void main()
{
    int arr[20][30][30],n,r,c,i,j,k;
    printf("Enter number of 2d array, rows and columns : ");
    scanf("%d%d%d",&n,&r,&c);

    printf("\nEnter array elements : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            for(k=0;k<c;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

    printf("\n----Array elements----\n");
    for(i=0;i<n;i++)
    {
    printf("\n----%d Array elements----\n",i+1);
        for(j=0;j<r;j++)
        {
            for(k=0;k<c;k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}
