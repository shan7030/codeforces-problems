#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{
ll n;
cin>>n;

vector<ll> v(n);

for(ll i=0;i<n;i++)
{
	cin>>v[i];
}

sort(v.begin(),v.end());

vector<ll> ans(n);

ll l=0;
ll r=n-1;
for(ll i=0;i<n;i++)
{
	if(i%2==0)
	{
		ans[l++]=v[i];
	}
	else
	{
		ans[r--]=v[i];
	}
}

for(ll i=0;i<n;i++)
{
	cout<<ans[i]<<" ";
}


return 0;
}	
