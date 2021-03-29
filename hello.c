#include <stdio.h>
int main()
{
printf("Hello, World!\n");
int c;
int* c_point;
c_point=&c;
printf("This is the value %d and this is the memory location of it %d \n",c,c_point);
return 0;
}