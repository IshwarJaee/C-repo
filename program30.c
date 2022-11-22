#include<stdio.h>

int ReturnAddFactors(int iNo)
{
   int iSum=0;
   int iCnt=0;

   if(iNo<0)  //updater
   {
       iNo=-iNo;
   }
             //iCnt<=iNo-1  
   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
       if((iNo%iCnt)==0)
       {
           iSum=iCnt+iSum;
       }
   } 
          return iSum;
}

int main()
{
    auto int iValue=0;
    auto int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=ReturnAddFactors(iValue);
    printf("Sum of factors is :%d\n",iRet);


    return 0;
}

//Time Complexity:O(N/2) O for order
