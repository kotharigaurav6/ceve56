// program showing the concept of array

#include<stdio.h>
void main()
{
    int i,arr[2],size;
        printf("Enter size of array : ");
        scanf("%d",&size);

        printf("Enter Array elements : \n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }

        printf("\nArray elements are : \n");
        for(i=0;i<size;i++)
        {
            printf("%d\t",arr[i]);
        }
}