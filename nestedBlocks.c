#include <stdio.h>
int main()
{
int a=5;
int b=10;
printf("The value of a out of block is %d \n",a);
printf("The value of b out of block is %d \n",b);
if(1){
    int a=20;
    int b=40;
    printf("The value of a inside the block is %d \n",a);
    printf("The value of b inside the block is %d \n",b);
    if(1){
        int a=80;
        int b=160;
        printf("The value of a inside the inner block is %d \n",a);
        printf("The value of b inside the inner block is %d \n",b);
    }
}
printf("The value of a out of block is %d \n",a);
printf("The value of b out of block is %d \n",b);
return 0;
}