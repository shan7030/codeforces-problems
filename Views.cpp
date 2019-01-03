#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll  long long int

int main()
{

ll w,h;
cin>>w>>h;
vector<ll> v(w);
	ll sum=0;	
	ll minreqnow=0;
	vector<ll> top(w,0);
	for(ll i=0;i<w;i++)
	{
		cin>>v[i];
		sum=sum+v[i];
		if(v[i]!=0)
		{
			top[i]=1;
			minreqnow++;
		}
	}

	sort(v.begin(),v.end());
	
	ll start=v[w-1];
	if(w==1)
	{
		cout<<(0)<<endl;
	}
	else
	{
		ll counter=0;
		ll pre=0;
		for(ll i=0;i<w;i++)
		{
			counter++;
			if(v[i]>pre)		
			pre++;
		}
		counter=counter+(v[w-1]-pre);
		cout<<sum-counter<<endl;
	}
return 0;
}
