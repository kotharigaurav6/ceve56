// Program
#include<stdio.h>
void main()
{
    float a=10.6703;
    double b = 34.43;
    char c = 'A';
    printf("value : %f\n",a);
    printf("value : %.2f\n",a);
    printf("value : %.3f\n",a);
    printf("value : %.4f\n",a);
    printf("value : %.8f\n",a);
    printf("value : %lf\n",b);
    printf("character : %c\n",c);
    printf("Ascii value of %c : %d\n",c,c);
    printf("character corresponding to ascii value 70 : %c\n",70);
}

/* ASCII VALUES
   American Standard Code for Information Interchange

   A = 65     a = 97      0 = 48
   B = 66     b = 98      1 = 49
   |   |      |    |      |    |
   Z = 90     z = 122     9 = 57
*/

