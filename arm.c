//Program to check whether number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
 int n,a,b,sum=0,c,count=0;
 printf("Enter the number=");
 scanf("%d",&n);
  b=c=n;
  while(c!=0)
  {
   c=c/10;
   count++;
  }
  printf("count is=%d\n",count);
  while(b!=0)
  {
   a=b%10;
   b=b/10;
   sum=sum+pow(a,count);
  }
  printf("Sum=%d\n",sum); 
  if(sum==n)
  {
   printf("Number is armstrong");
  }
  else
  {
   printf("Number is not armstrong");
  }
return 0;
}
