#include<iostream>
#include<vector>
#include<climits>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;

	while(t--)
	{
		ll a,b;
		cin>>a>>b;

		ll n;
		cin>>n;
		
		vector<ll> a1(n);
		vector<ll> b1(n);
		ll required= 0;
		ll max=INT_MIN;
		
		for(ll i=0;i<n;i++)
		{
			cin>>a1[i];
			if(a1[i]>max)
			max=a1[i];
		}

		for(ll i=0;i<n;i++)
		{
			cin>>b1[i];
			ll div  = (b1[i]/a);
			if(b1[i]%a!=0)
				div++;
			required = required + a1[i]*div;
		}
		
		required = required - max;
		if(required<b)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
	
return 0;
}
