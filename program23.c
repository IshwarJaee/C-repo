//accept number check if it is even or odd

#include<stdio.h>
#include<stdbool.h>


bool CheckEven(int iNo)
{
  if((iNo%2)==0)
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

  bRet=CheckEven(iValue);
  if(bRet==true)
  {
    printf("%d number is even\n",iValue);
  }
  else
  {
     printf("%d number is odd\n",iValue);
  }
  
 return 0;
}
