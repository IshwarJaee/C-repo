//Accept Number and Display the Digits of that Number
#include<stdio.h>

int DisplayEven(int iNo)
{
   int iSum=0;
   int iDigit=0;
   if(iNo<0)
   {
       iNo= -iNo;
   }
     
    while(iNo!=0)  //iNo>0
    {
         iDigit=iNo%10;

        if((iDigit%2)==0)
        {
            printf("%d Even number \n",iDigit);
            iSum=iSum+iDigit;
        }
        iNo=iNo/10;
    }
    return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

   iRet=DisplayEven(iValue);
   printf("Sum is %d\n",iRet);

    return 0;
}