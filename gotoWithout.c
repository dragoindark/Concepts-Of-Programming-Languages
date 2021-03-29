#include <stdio.h>
int main()
{
int a = 1;
int b = 10;
int c = 10;

while(1){
    a=a*10;
    b=a*c+5;
    if(b>100){
        b--;
        a=1;
        c=c-5;
    }else{
        printf("B: %d \n",b);
        return 0;
    }
}

}