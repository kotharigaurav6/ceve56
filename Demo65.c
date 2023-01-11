// program showing the concept of string
#include<stdio.h>
void main()
{
    int i;
    char str[6] = {'H','E','\0','L','O','\0'};
    printf("str[0] : %c\n",str[0]);
    printf("str[1] : %c\n",str[1]);
    printf("str[2] : %c\n",str[2]);
    printf("str[3] : %c\n",str[3]);
    printf("str[4] : %c\n",str[4]);
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("str[%d] : %c\n",i,str[i]);
    }
    printf("\nString : %s\n",str);
}