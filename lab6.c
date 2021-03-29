#include <stdio.h>
int main()
{
int k = 1;
int i = 0;
printf("%d", (i || k--)?i:k);
return 0;
}