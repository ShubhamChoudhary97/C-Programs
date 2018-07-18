#include<stdio.h>
int main()
{
 char s[100],c[100];
 int i=0,j,k,count=0;
 scanf("%s",s);
 while(s[i]!='\0')
 {
  i++;
 }
 for(j=0,k=i-1;j<i,k>=0;j++,k--)
 {
  c[j]=s[k];
 }
 for(j=0;j<i;j++)
 {
  if(c[j]==s[j])
  {
   count++;
  }
  else
  {
   break;
  }
 }
  if(count==i)
  {
    printf("YES");
  }
  else
  {
   printf("NO");
  }
return 0;
}
