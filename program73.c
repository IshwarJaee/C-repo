#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iCnt=0;
    int iMax=Arr[0];

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax=Arr[iCnt];
        }
    }    
    return iMax;       
}

int main()
{
    auto int iSize=0,iRet=0;
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

    iRet=Maximum(ptr,iSize);
    printf("Maximun number is: %d\n",iRet);

    free(ptr);

    return 0;
}