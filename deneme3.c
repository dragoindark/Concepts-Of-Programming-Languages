#include <stdio.h>
int main()
{
int i;
int* p_i;
p_i=&i;
(*p_i)=5;
printf("The value of i is %d",*p_i);

}