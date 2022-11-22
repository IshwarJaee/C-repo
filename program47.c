//Accept Number and Display the Digits of that Number
#include<stdio.h>

int CountDigit(int iNo)
{
    int iCnt=0;
   int iDigit=0;
   if(iNo<0)
   {
       iNo= -iNo;
   }
     
    while(iNo!=0)  //iNo>0
    {
        iDigit=iNo%10;
        iNo=iNo/10;
        iCnt++;
    }
    return iCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

   iRet=CountDigit(iValue);
   printf("%d\n",iRet);

    return 0;
}