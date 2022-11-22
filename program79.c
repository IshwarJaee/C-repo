#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFirstOccurance(int Arr[],int iLength, int iNo)
{
    int iCnt=0;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iNo==Arr[iCnt])
        {
            break;
        }
    }    
    if(iCnt==iLength)
    {
        return -1;
    }  
    else
    {
        return iCnt;
    }
    
}

int main()
{
    auto int iSize=0,iValue=0;
    register int iCnt=0;
    int iRet=0;
    int *ptr=NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("Enter values to search :\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=SearchFirstOccurance(ptr,iSize,iValue);
    if(iRet==-1)
    {
    printf("there is no such element in array\n");
    }
    else
    {
        printf("Elelment first occurance at:%d\n",iRet);
    }
    free(ptr);

    return 0;
}