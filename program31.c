//Accept and display perfect number from user 
#include<stdio.h>
#include<stdbool.h>
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

bool CheckPerfect(int iNo)
{
    int iAns=0;
    iAns=ReturnAddFactors(iNo);
    if(iAns==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    auto int iValue=0;
    bool bRet;
     
    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("%d is perfect number \n",iValue);
    }
    else
    {
       printf("%d is not perfect number \n",iValue); 
    }

    return 0;
}

//Time Complexity:O(N/2) O for order
