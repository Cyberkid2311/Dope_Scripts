#include<stdio.h>
int main()
{
  int a[10],i,j,temp;
  printf("Enter the elements:");
  for(i=0;i<10;i++)
  {
      scanf("%d",&a[i]);
     }
     for(i=0;i<n-1;i++)
     {
        for(j=0;j<n-1-i;j++)
        {
           if(a[j]>a[j+1])
           {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
            }
          }
       }
       printf("Sorted list is:\n");
       for(i=0;i<n;i++)
       printf("%d",a[i]);
       printf("\n");
       return 0;
       
