#include<stdio.h>
#include<stdbool.h>

 int CheckPrime(int iNo)
{
    int iCnt;


    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            break;
        }
    }
    if(iCnt==(iNo/2)+1)
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

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);
    if(bRet==true)
    {
         printf("%d Number is prime \n",iValue);
    }
    else
    {
        printf("%d Number is not prime \n",iValue);

    }

    return 0;
}

//Time Complexity:O(N/2) O for order
