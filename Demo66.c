// program showing the concept of string
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20]="andrew";
    char str2[20]="MATHEW";
    char str3[20]="simon";
    char str4[20];
        printf("length : %d\n",strlen(str1));
        printf("lowercase : %s\n",strlwr(str2));
        printf("uppercase : %s\n",strupr(str3));
        printf("reverse : %s\n",strrev(str1));
        printf("copy : %s\n",strcpy(str4,str3));
        printf("concat : %s\n",strcat(str1,str2));
        printf("compare : %d\n",strcmp(str3,str4));
}