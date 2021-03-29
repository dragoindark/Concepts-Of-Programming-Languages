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
f=1;
m=1;
n=7;
printf("For without incrementation\n");
for(;m<=n;){
    f=f*m;
    printf("The value of f is %d\n",f);
    ++m;
    printf("The value of m is %d\n",m);
}
printf("Value of f is %d \n",f);

f=1;
m=1;
n=7;
printf("For with incrementation\n");
for(m=1;m<=n;m++){
    f=f*m;
    printf("The value of f is %d\n",f);
    printf("The value of m is %d\n",m);
}
printf("Value of f is %d \n",f);

return 0;
}