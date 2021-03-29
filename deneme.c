#include <stdio.h>
int main()
{
int k = 1;
int i = 0;
int c=(i && k--);
printf("The c result %d \n",c);
printf("The if else result %d \n", (i && k--)?i:k);
return 0;
}