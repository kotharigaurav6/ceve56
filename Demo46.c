// Program showing the concept of function
#include<stdio.h>
// function definition
void display()
{
    printf("display function called\n");
}

void main()
{
printf("Before calling\n");
  display();      // function calling    
  display();
  display();  
printf("After calling\n");
}

