#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,n,m,j,c,i=2;
    cin>>t;
    while(t--)
    {
        cin>>n; 
        m=n;
        c=0;
        i=2;
        while((n%i)==0)
        {
            c++;
            n/=i;
        }
        if((c>0) && (n!=1))
        cout<<i<<'^'<<c;
        else if(n==1)
        {
            cout<<i<<'^'<<c<<'\n'; 
        }
        else
        cout<<i<<"^0";
        for(i=3;i<n;i++)
        { c=0;
            while((n%i)==0)
        {
            c++;
            n/=i;
        }
        if((c>0) && (n!=1))
        cout<<'*'<<i<<'^'<<c;
        else if((n==1) && (c!=0) &&(i!=m))
        {
            cout<<'*'<<i<<'^'<<c<<'\n';
            break;
        }
        }
         if((n!=m) &&(i==n))
        {
            cout<<'*'<<n<<"^1\n"; 
        }
        else
        cout<<'\n';
        
    }
    return 0;
    }
