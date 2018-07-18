#include<stdio.h>
int main()
{
 char s[100];
 int a[100],p;
 scanf("%s",s);
 for(p=0;s[p]!='\0';p++)
 {
  a[p]=s[p];
 }
 for(p=0;s[p]!='\0';p++)
 {
  if(a[p]<97)
  {
   printf("%c",a[p]+32);
  }
  else if(a[p]>=97)
  {
   printf("%c",a[p]-32);
  }
 }
return 0;
}
