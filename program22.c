//Program to accept 4 and display 10  on screen 

#include<stdio.h>

int Summation(int iNo)
{
 int iSum=0;
 int iCnt=0;

 if(iNo<0)
 {
  iNo= -iNo;
 }

for(iCnt=1;iCnt<=iNo;iCnt++) 
 {
  iSum= iSum+iCnt; 
 }   
  return iSum;                                                                                                                                                                                                                            
}                                                                     


int main()
{
 int iValue=0;
 int iRet=0;
 printf("enter no\n");
 scanf("%d",&iValue);

 iRet=Summation(iValue);

 printf("summmation is:%d\n",iRet);

 return 0;
}







