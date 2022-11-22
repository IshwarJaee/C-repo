//accept number check if it is divisable by 3 an 5

#include<stdio.h>
#include<stdbool.h>


bool Check(int iNo)
{
  if(
     ((iNo%3)==0)&& // ||
     ((iNo%5)==0)
    )
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
  bool bRet=false;

  printf("enter number\n");
  scanf("%d",&iValue);

  bRet=Check(iValue);
  if(bRet==true)
  {
    printf("%d number is divisable\n",iValue);
  }
  else
  {
     printf("%d number is not divisable\n",iValue);
  }

 return 0;
}
