#include <stdio.h>
#include <stdlib.h>

int main()
{
 int entry = 675;

 scanf("%d", &entry); 

 int temp = entry;
 int sum = 0;
 int index = 0;
 int m;


 LABEL1: 
 if(temp > 0)
 {
 m = temp % 10;
 sum += m;
 temp /= 10; // / is integer division
 goto LABEL1;
 }

 index = m * 2 + sum;


LABEL2: if(index > 27)
 {
 if(index > 45)
 goto LABEL4;

 printf ("Accept... \n");
 index++;
 goto LABEL2;
 }

LABEL3: if(index <= 27)
 {
 if(index <= 1)
 goto LABEL4;

 printf ("Reject... \n");
 index--;
 goto LABEL3;
 }


LABEL4: printf("Entry: %d \n Index: %d \n", entry, index);
 return 0;
}