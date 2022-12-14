// Program to check whether entered character is in uppercase,lowercase or a digit
#include<stdio.h>
void main()
{
    char ch; // declaration
    printf("Enter character : ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
        printf("character is in uppercase\n");
    else
    {
        if(ch>='a' && ch<='z')
            printf("character is in lowercase\n");
        else
        {
            if(ch>='0' && ch<='9')
                printf("Character is a digit\n");
            else
                printf("Not matched\n");
        }
    }
}

