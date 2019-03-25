#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int 

int main()
{
ll n;
cin>>n;

vector<ll> b(n/2);
vector<ll> a(n);
	for(ll i=0;i<(n/2);i++)
	{
		cin>>b[i];		
		
	}

	ll counter=0;
	for(ll i=0;i<(n/2);i++)
	{		
		if((b[i]-counter)>a[n-i] && i!=0)
		{
			counter=b[i]-a[n-i];
		}
		a[i]=counter;
		a[n-1-i]=b[i]-counter;
	}	
	for(ll i=0;i<n;i++)
	{
		cout<<a[i]<<" ";	
	}
	



return 0;
}
