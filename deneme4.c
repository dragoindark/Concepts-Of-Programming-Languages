#include <stdio.h>
int main()
{
int i=1;
printf("The value of i outside block is %d \n",i);
{
    i=999;
    printf("The value of i inside block is %d \n",i);
}
printf("The value of i after the block is %d \n",i);
{
    int i=111;
    printf("The value of i after the first block is %d \n",i);
    {
        int i=222;
        printf("The value of i after the second block is %d \n",i);
        {
            int i=333;
            printf("The value of i after the third block is %d \n",i);
        }
    }
}
return 0;
}