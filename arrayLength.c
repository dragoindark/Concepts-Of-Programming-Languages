#include <stdio.h>
int main()
{
int array[20];
int i;
int* d_point=(int*)malloc(sizeof(int)*10);
for(i=0;i<20;i++){
    array[i]=i;
}
for(i=0;i<20;i++){
    printf("The %d th value of the array is %d\n",i,array[i]);
}
size_t arrayLength=sizeof(array)/sizeof(*array);
printf("The array length is %d \n",arrayLength);
return 0;
}