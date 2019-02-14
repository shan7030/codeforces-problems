#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll n,k;
cin>>n>>k;
vector<ll> v(n);

ll countofzeros=0;
for(ll i=0;i<n;i++)
{
	cin>>v[i];
	if(v[i]==0)
	{
		countofzeros++;
	}
}
	sort(v.begin(),v.end());
	ll start=0;
	if(countofzeros==n)
	{
		while(k--)
		cout<<"0"<<endl;
	}
	else
	{
		ll j=0;
		for(ll i=0;i<n;)
		{
			v[j++]=v[i];
			ll x=v[i];
			while(v[i]==x && i<n)
			i++;
			
		}
		n=j;
		ll i=0;	
		for( ;i<n;i++)
		{
			if(v[i]!=0)
			break;
		}
	
		ll diff=0;
		for(;i<n;i++)
		{
			cout<<(v[i]-diff)<<endl;
			diff=v[i];k--;
			if(k<=0)
			break;
		}
		while(k--)
		{
	
			cout<<"0"<<endl;
		}
		
	}
return 0;
}
