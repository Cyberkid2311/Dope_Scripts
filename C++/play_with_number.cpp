#include <iostream>
using namespace std;
int main() 
{
	int n,q,i;
	cin >> n>>q;
	long int arr[n],sum[n+1]={0};
	for(i=0;i<n;i++)
	 {
	    cin>>arr[i];
	    sum[i+1]=sum[i]+arr[i];
	 }
	 for(i=0;i<q;i++)
	 {
	     int l,r;
	     cin>>l>>r;
	     cout<<(sum[r]-sum[l-1])/(r-l+1)<<endl;
	 }
}
