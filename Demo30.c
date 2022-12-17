// Program showing the concept of switch control statement
#include<stdio.h>
void main()
{
    int i=1,num=10;
        switch(i++)
        {   
            case -4 : --num;
            case 0 : num--;
            case 3 : ++num;
                     break;
            case 2 : ++num;
            case 1 : --num;
            default : printf("num : %d\n",num++);
                        break;      
        }
}





