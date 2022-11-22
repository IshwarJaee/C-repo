#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//positive and negative
bool Search(int Arr[],int iLength, int iNo)
{
    int iCnt=0;
    bool bFlag=false;
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iNo==Arr[iCnt])
        {
            bFlag=true;
            break;
        }
        
    }      
    return bFlag; 
}

int main()
{
    auto int iSize=0,iValue=0;
    register int iCnt=0;
    bool bRet;
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

    bRet=Search(ptr,iSize,iValue);
    if(bRet==true)
    {
    printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(ptr);

    return 0;
}