// program showing the concept of 2d array
#include<stdio.h>
void main()
{
    int arr[20][20],i,j,r,c;
    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&c);
    printf("Enter array elements : ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nArray elements are : \n");
    for(i=0;i<r;i++)   
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
