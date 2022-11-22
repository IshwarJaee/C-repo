#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchLastOccurance(int Arr[],int iLength, int iNo)
{
    int iCnt=0;
    
    for(iCnt=iLength-1;iCnt>=0;iCnt--)
    {
        if(iNo==Arr[iCnt])
        {
            break;
        }
    }    
    
        return iCnt;

    
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

    iRet=SearchLastOccurance(ptr,iSize,iValue);
    if(iRet==-1)
    {
    printf("there is no such element in array\n");
    }
    else
    {
        printf("Elelment last occurance at:%d\n",iRet);
    }
    free(ptr);

    return 0;
}