//Accept number from user and display factors of that number e.g 6%3=0
#include<stdio.h>

void DisplayFactors(int iNo)
{
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
          // return iCnt;
           printf("%d\n",iCnt);
       }
   } 
}

int main()
{
    auto int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

//Time Complexity:O(N/2) O for order
