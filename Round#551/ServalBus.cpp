#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n,t;
cin>>n>>t;

vector<ll> arrival(n);
vector<ll> time(n);

for(ll i=0;i<n;i++)
{
	cin>>arrival[i]>>time[i];
}

vector<ll> v;
for(ll i=0;i<n;i++)
{	
	if(t<arrival[i])
	{
		v.push_back(arrival[i]);	
	}
	else if(t==arrival[i])
	{
		cout<<i+1<<endl;
		return 0;

		v.push_back(arrival[i]);		
	}
	else
	{
		ll op=t-arrival[i];
		if(op%time[i]==0)
		{
			v.push_back(time[i]*(op/time[i])+arrival[i]);
		}
		else
		{
			v.push_back(time[i]*(op/time[i]+1)+arrival[i]);
		}
	}		
}	

ll start=0;
ll min=v[0];


for(ll i=0;i<n;i++)
{
	if(v[i]<min)
	{
		min=v[i];
		start=i;
	}		
}	

cout<<start+1<<endl;



return 0;
}
