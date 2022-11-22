#include"program59header.h"

ULONG Power(int iNo1,int iNo2)
{
    register int iCnt=0;
    ULONG lMult=1;
    if(iNo1<0)
    {
        iNo1 = -iNo1;
    }

    for(iCnt=1;iCnt<=iNo2;iCnt++)
    {
        lMult=lMult*iNo1;
    }
    return lMult;
}

