#include<stdio.h>
#include<stdbool.h>

 int CheckPrime(int iNo)
{
    int iCnt;
    bool bFlag=true;


    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            
            bFlag=false;
            break;
        }
    }
    return bFlag;
}
    

int main()
{
    int iValue=0;
    bool bRet;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);
    if(bRet==true)
    {
         printf("%d Number is prime \n",bRet);
    }
    else
    {
        printf("%d Number is not prime \n",bRet);

    }

    return 0;
}

//Time Complexity:O(N/2) O for order
