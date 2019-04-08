#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin>>n;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	ll sum=0;
	for(ll i=0;i<n;i=i+2)
	{
		sum=sum+(v[i+1]-v[i]);
	}
	
	cout<<sum<<endl;

return 0;
}
