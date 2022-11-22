//ask user how many gram gold he want to  purchase
//1  4000
//2  800
//5  20000
//10 40000

#include<stdio.h>

void JwelarsPortal(int iWeight)
{
 switch(iWeight)
{
 case 1:
     printf("your bill is 4000\n");
     break;

 case 2:
     printf("your bill is 8000\n");
     break;

 case 5:
     printf("your bill is 20000\n");
     break;

 case 10:
     printf("your bill is 40000\n");
     break;
  
    default:
      printf("invalid wight\n");
      break;

} 

}

int main()
{
 int iValue=0;
 
 printf("How many Gram of Gold you want\n");
 scanf("%d",&iValue);

 JwelarsPortal(iValue);
 
 return 0;
}
