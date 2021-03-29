#include <stdio.h>
int main()
{
int f=1;
int m=1;
int n=7;
while(m<=n){
    f=f*m;
    printf("The value of f is %d\n",f);
    ++m;
    printf("The value of m is %d\n",m);
}
printf("Value of f is %d \n",f);
return 0;
}