#include<iostream>
using namespace std;
#define ll long long int


int main()
{

ll n,m,r;
cin>>n>>m>>r;

ll max1=1001;
for(ll i=0;i<n;i++)
{
	ll k;
	cin>>k;
	if(k<max1)
	{
		max1=k;
	}
}

ll count=r/max1;
ll toadd=r-count*max1;
ll min=0;
for(ll i=0;i<m;i++)
{
	ll k;
	cin>>k;
	if(k>min)
	{
		min=k;
	}
}
toadd=count*min+toadd;
cout<<(toadd>r?toadd:r)<<endl;

return 0;
}
