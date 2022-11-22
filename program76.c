#include<stdio.h>
#include<stdlib.h>
//positive and negative
int Frequency(int Arr[],int iLength, int iNo)
{
    int iCnt=0,iFrequency=0;
    

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iNo==Arr[iCnt])
        {
            iFrequency++;
        }
    }       
    return iFrequency;
}

int main()
{
    auto int iSize=0,iRet=0,iValue=0;
    register int iCnt=0;
    int *ptr=NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("Enter values of frequency :\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=Frequency(ptr,iSize,iValue);
    printf("Frequency of number is: %d\n",iRet);

    free(ptr);

    return 0;
}