#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{

	ll n,m,k;
	cin>>n>>m>>k;

	vector<ll> v(n);


	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
	}

	vector<ll> diff(n-1);

	for(ll i=1;i<n;i++)
	{
		diff[i-1]=v[i]-v[i-1];
	}

	sort(diff.begin(),diff.end());
	ll gh=n-k;
	ll sum=0;

	for(ll i=0;i<gh;i++)
	{
		sum=sum+diff[i];
	}


	cout<<(sum+k)<<endl;

return 0;
}
