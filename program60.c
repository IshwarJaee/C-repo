#include<stdio.h>
#include<stdbool.h>

bool ChkAmstrong(int iNo)
{
    int temp=iNo;
    int iDigit=0;
    int iMult=1;
    int iSum=0;
    int iCnt=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iMult=iMult*iNo;
        iCnt++;
        iSum=iSum+iMult;
        if(iSum==iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}
int main()
{
    int iValue=0;
    bool bRet=0;

    printf("Enter number");
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