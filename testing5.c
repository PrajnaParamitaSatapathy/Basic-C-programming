#include <stdio.h>
int main()
{
int i,j,n,s;
printf("Enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 if(i%2==0)
 s=0;
 else
 s=1;
 for(j=1;j<=i;j++)
 {
  printf("%d",s);
  if(s==0)
  s++;
  else if(s==1)
  s--;
 }
 printf("\n");
 }
 return 0;
 } 
