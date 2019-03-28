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

	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		sum=sum+v[i];
	}
	ll min=v[0];
	ll sum1=sum;
	for(ll i=2;i<=100;i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(v[j]%i==0)
			{
				ll min1=v[j]/i;
				ll min2=min*i;
				ll sum2=sum1-min-v[j]+min1+min2;

				if(sum2<sum)
				sum=sum2;
			}
		}
	}

	cout<<sum<<endl;
	

return 0;
}
