// program showing the concept of pointer to an array
#include<stdio.h>
void main()
{
    int arr[50],*ptr[50],size,i; 
    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        ptr[i] = &arr[i];
    }

    printf("\nArray elements are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",*ptr[i]);
    }
}