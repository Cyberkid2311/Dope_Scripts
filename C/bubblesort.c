#include<stdio.h>
int main()
{
  int n,a[100],i,j,temp;
  printf("Enter no of elements you want");
  scanf("%d",&n);
  printf("Enter %d elements you want to ,sort one by one\n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
    }
  }
  printf("The sorted array is\n");
  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
   }
   return 0;
   }

