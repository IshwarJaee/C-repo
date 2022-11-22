#include<stdio.h>
#include<stdbool.h>
bool CheckPalandrom(int iNo)
{
    int iTemp=0;
    int iDigit=0;
    int iRev=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    iTemp=iNo;

    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    if(iRev==iTemp)
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
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet=CheckPalandrom(iValue);
    if(bRet==true)
    {
        printf("%d number is palandrom\n",iValue);
    }
    else
    {
        printf("%d number is not palandrom\n",iValue);
    }

    return 0;
}