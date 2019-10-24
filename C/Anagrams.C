
#include <stdio.h>

int main()
{
	int test,t,l1,l2,d,l;
	char s1[10000],s2[10000];
	scanf("%d", &t);    
	
	for(test=0;test<t;test++)
    {
     scanf("%s%s",&s1,&s2);
	 l1=strlen(s1);
	 l2=strlen(s2);
	 d=0;
      for(int i=0;i<l1;i++)
	   { 
	     for(int j=0;j<l2;j++)
	      {
	        if(s1[i]==s2[j])
	        {
	         ++d;
	         s2[j]='0';
	         break;
	        }
	      }
	   }
	 l=l1+l2-(2*d);
	 printf("%d",l);
	 printf("\n");
   }
   return 0;
}

