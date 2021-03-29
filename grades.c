#include <stdio.h>
int main()
{
/*
float labOne;
float* labOnePointer=NULL;
float labTwo;
float* labTwoPointer=NULL;
float labThree;
float* labThreePointer=NULL;
*/
float labArray[3],quiz,midterm,final;
float* quizPointer=NULL;
float* midtermPointer=NULL;
float* finalPointer=NULL;
quizPointer=&quiz;
midtermPointer=&midterm;
finalPointer=&final;
int i;
float labSum;
float* labSumPointer=NULL;
labSumPointer=&labSum;
for(i=0;i<3;i++){
    printf("Enter %d th lab grade ",i+1);
    scanf("%f",&labArray[i]);
}
for (i=0;i<3;i++){
    printf("The %d th elements value is %f \n",i,labArray[i]);
    labSum+=labArray[i];
}
printf("The total lab grade is %f \n",labSum);
printf("Enter quiz grade ");
scanf("%f",quizPointer);
printf("The quiz grade is %f \n",quiz);
printf("Enter midterm grade ");;
scanf("%f",midtermPointer);
printf("The midterm grade is %f \n",midterm);
printf("Enter final grade ");;
scanf("%f",finalPointer);
printf("The final grade is %f \n",final);

float labTotalGrade=labSum*0.15;
float quizTotalGrade=quiz*0.15;
float midtermTotalGrade=midterm*0.3;
float finalTotalGrade=final*0.4;

float grade=labTotalGrade+quizTotalGrade+midtermTotalGrade+finalTotalGrade;


if(grade<60){
    printf("Student failed with the grade %f \n",grade);
}else{
    printf("Student passed with the grade %f \n",grade);
}

return 0;
}