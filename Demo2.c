// Program showing the concept of escape sequence character
#include<stdio.h>
void main()
{
    printf("Hello world\n");
    printf("\tHello world\n");
    printf("Hello\tworld\n");
    printf("Hello \"world\"\n");
    printf("Hello \'world\'\n");
    printf("Hello 'world'\n");
    printf("Hello\bworld\n");
    printf("Hello\aworld\n");
    printf("Hello\vworld\n");
}
/*
        Escape sequence character
        -------------------------
        \n = new line (line change)
        \t = horizontal space
        \" = double quotes
        \' = single quote
        \b = backspace
        \a = beep sound
        \v = vertical tab 
*/