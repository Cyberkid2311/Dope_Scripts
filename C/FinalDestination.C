#include<stdio.h>
int main()
{
    int i,slr=0,sud=0;
    char s[100005];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='L')
        slr-=1;
        else if(s[i]=='R')
        slr+=1;
        else if(s[i]=='U')
        sud+=1;
        else if(s[i]=='D')
        sud-=1;
    }
    printf("%d %d",slr,sud);
    return 0;
}
