//program to accept and display 5 times hello on screen


#include<stdio.h>

void Display(int iNo)
{
 int iCnt=0;
 if(iNo<0)
 {
   printf("enter pos+"); //filter
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