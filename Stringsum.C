#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    int i,p=0;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        p+=(s[i]-96);
    }
    printf("%d",p);
    return 0;
}
