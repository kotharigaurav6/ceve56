// program showing the concept of array
#include<stdio.h>
void main()
{
    int i,arr[20],size,min;
        printf("Enter size of array : ");
        scanf("%d",&size);
        printf("Enter Array elements : \n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        min=arr[0];
        printf("\nArray elements are : \n");
        for(i=0;i<size;i++)
        {
            if(min>arr[i])
                min=arr[i];
            printf("%d\t",arr[i]);
        }
        printf("\nMinimum element : %d\n",min);
}