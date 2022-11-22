#include<stdio.h>
#include<stdlib.h>
//positive and negative
int ChkOccurence(int Arr[],int iLength, int iNO)
{
    int iCnt=0;
    

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        
    }    
    return iMin;       
}

int main()
{
    auto int iSize=0,iRet=0,iValue=0;
    register int iCnt=0;
    int *ptr=NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("Enter values of :\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter number");
    scanf("%d",&ivalue);

    iRet=ChkOccurence(ptr,iSize,iValue);
    printf("occurenc number is: %d\n",iRet);

    free(ptr);

    return 0;
}