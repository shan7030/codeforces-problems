#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
#define ll long long int

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int main()
{

ll t;
cin>>t;

while(t--)
{	
	ll k;
	cin>>k;
	
	ll po=0;
	ll sum=0;	
	ll counter=0;
	ll nk=k;
	while(k)
	{
		if(k%2==0)
		counter++;
		sum=sum+pow(2,po);
		po++;
		k=k/2;	
	}	
	k=nk;
	if(counter==0)
	{
		ll gcdd=0;
		vector<ll> f;
		for(ll i=1;i*i<=(nk);i++)	
		{
			if(nk%i==0)
			{
				f.push_back(i);
				if(nk/i!=i && i!=1)
				{
					f.push_back(nk/i);
				}
			}
		}
		for(ll i=0;i<f.size();i++)
		{
			ll xorr=f[i]^nk;
			ll andd=f[i]&nk;
			if(gcdd<gcd(andd,xorr))
			{
				gcdd=gcd(andd,xorr);
			}
		}
		cout<<gcdd<<endl;
	}
	else
	{
		cout<<sum<<endl;
	}
}


return 0;
}
