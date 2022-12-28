// Program showing the concept of function
#include<stdio.h>
void display();  // function declaration

void main()
{
printf("Before calling\n");
  display();      // function calling    
printf("After calling\n");
}

// function definition
void display()
{
    printf("display function called\n");
}
