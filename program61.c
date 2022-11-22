#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1,int iNo2)
{
    register int iCnt=0;
    int iMult=1;
    if(iNo1<0)
    {
        iNo1 = -iNo1;
    }

    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        iMult=iMult*iNo1;
    }
    return iMult;
}

bool ChkAmstrong(int iNo)
{
    int itemp=0;
    int iDigcnt=0;
    int iDigit=0;
    int iSum=0;

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
         iDigit=iNo%10;
         iSum=iSum+Power(iDigit,iDigcnt);
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