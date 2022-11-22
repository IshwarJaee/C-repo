#include<stdio.h>
#include<stdbool.h>

 int CountFactor(int iNo)
{
    int iCnt;
    int iFactCnt=0;

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}
    

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=CountFactor(iValue);
    printf("count is %d\n",iRet);

    return 0;
}

//Time Complexity:O(N/2) O for order
