#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll power(ll x,ll y)
{
ll z=1;
    while(y>0)
    {
        if(y&1)
        {
            z=(z*x)%mod;
        }
        x=(x*x)%mod;
        y/=2;
    }
    return z;
}

int main()
{
    ll n,i;
    cin>>n;
    ll a=2,d=2,r=2;
    ll sum1,sum2;
    sum1=(a-((a+((n-1)*d))*(power(r,n))))/(1-r);
    sum2=(d*r*(1-(power(r,n-1))))/(power(1-r,2));
    cout<<(sum1+sum2)%mod<<endl;
    return 0;
}
