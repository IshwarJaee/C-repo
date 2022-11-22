#include<stdio.h>
#include<stdbool.h>

bool ChkAmstrong(int iNo)
{
    int itemp=0;
    int iDigcnt=0;
    int iDigit=0;
    int iSum=0;
    int iMult=1;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
     itemp=iNo;
    

    while(iNo!=0)
    {
        iDigcnt++;
        iNo=iNo/10;        
    }
     iNo=itemp;

     while(iNo!=0)
     {
         iMult=1;
         iDigit=iNo%10;

         for(iCnt=1;iCnt<=iDigcnt;iCnt++)
         {
             iMult=iMult*iDigit;
         }

         iSum=iSum+iMult;
         iNo=iNo/10;
     }
     if(iSum==itemp)
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
    int iValue=0;
    bool bRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=ChkAmstrong(iValue);
    if(bRet==true)
    {
        printf("%d is armstrong number\n",iValue);
    }
    else
    {
        printf("%d is not armstrong number\n",iValue);
    }
    return 0;
}