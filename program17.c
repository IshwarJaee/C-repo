//Program to display 1 to 5 on screen 

#include<stdio.h>

void Display(int iNo)
{
 int iCnt=0;
 if(iNo<0)   //updator
 {
   iNo=-iNo;
 }
         
 for(iCnt=1; iCnt<=iNo;  iCnt++)                       
 {                                                                
   printf("hello\n");                                             
 }                                                                  
                                                                                                                                                         
}                                                                     


int main()
{
 int iValue=0;

 printf("enter num\n");
 scanf("%d",&iValue);

 Display(iValue);

 return 0;
}