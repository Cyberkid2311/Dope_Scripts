#include <stdio.h>

int main()
{
int t,n,i,a;
char s[10000];
scanf("%d",&t);
while(t--)
{
int c=0;
scanf("%d",&n);
scanf("%s",s);
for(i=0;i<=n;i++)
{
if(s[i]>=48&&s[i]<=57)
{
a++;
}
else
{
if(a!=0)
c++;
a=0;
}
}
printf("%d\n",c);
