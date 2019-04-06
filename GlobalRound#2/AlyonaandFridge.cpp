#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int


int main()
{

	ll n,h;
	cin>>n>>h;
	vector<ll> a(n);
	
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	vector<ll> v;

	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		v.push_back(a[i]);
		sort(v.begin(),v.end(),greater<ll> ());
		ll flag=0;
		ll size=h;
		for(ll j=0;j<v.size();j=j+2)
		{
			if(v[j]<=size)
			size=size-v[j];
			else
			{
				flag=1;
				break;
			}
		}	
		if(flag==1)
		{
			break;
		}
		else
		{
			ans=i+1;
		}
	}	

	cout<<ans<<endl;

return 0;

}
