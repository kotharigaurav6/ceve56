// Program
#include<stdio.h>
void main()
{
    int b = 5,c = 4;
    int a = (5<0) ? b++ : c++;
    printf("a : %d\n",a);
    printf("b : %d\n",b);
    printf("c : %d\n",c);
        
}

