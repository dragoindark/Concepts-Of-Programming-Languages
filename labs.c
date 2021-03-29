#include <stdio.h>
#include <stdlib.h>

void stackDynamic(){
    int a=10;  //stack dynamic
    printf("The stack-dynamic variable of a is %d \n",a);
}
int main()
{
// This is a static variable
static int c=5;
printf("The static variable of c is %d \n",c);
stackDynamic();
int* d_point;
d_point=(int*) malloc(sizeof(int)*10); //explicit heap dynamic
(*d_point)=999;
printf("The explicit heap dynamic variable of d is %d \n",*d_point);
int implicitArray[]={11,12,13,14,15};
int i;
int size=5;
for (i=0;i<size;i++){
    printf("The implicit heap dynamic variable of array variable is %d \n",implicitArray[i]);
}
int implicitVariable=888; //implicit heap dynamic
printf("The implicit heap dynamic variable of implicit variable is %d \n",implicitVariable);

int *explicitArray=malloc(5*sizeof(int)); //Explicit Array
if (explicitArray==NULL){
    printf("Allocation failed");
}
for (i=0;i<size;i++){
    explicitArray[i]=i; 
}
for (i=0;i<size;i++){
    printf("The explicit heap dynamic variable of array variable is %d \n",explicitArray[i]);
}
return 0;
}