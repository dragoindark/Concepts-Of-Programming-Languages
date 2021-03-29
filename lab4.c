#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main()
{
printf("Hello, World!\n");
int c;
int* c_point;
c_point=(int*)malloc(sizeof(int));
c=12;
int a=5,b=10;
printf("This is the value %d and this is the memory location of it %d \n",c,*c_point);
int d=max(a,b);
printf("The max number is %d \n",d);
return 0;
}