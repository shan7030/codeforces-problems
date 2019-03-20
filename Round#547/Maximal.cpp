#include<iostream>
#include<vector>
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

vector<ll> maxrest;

ll i=0;

if(v[0]==0)
{
	maxrest.push_back(0);
}

while(i<n)
{
	ll count=0;
	while(v[i]==1 && i<n)
	{
		i++;
		count++;
	}
	if(count!=0)
	{
		maxrest.push_back(count);
	}

	while(v[i]==0 && i<n)
	{
		i++;

	}
	
}

if(v[n-1]==0)
{
	maxrest.push_back(0);
}

if(maxrest[0]!=0 && maxrest[maxrest.size()-1]!=0)
{
	
	ll startmax=maxrest[0]+maxrest[maxrest.size()-1];
	for(ll j=0;j<maxrest.size();j++)
	{
		//cout<<maxrest[j]<<" ";
		if(startmax<maxrest[j])
		startmax=maxrest[j];
	}


	//cout<<endl;
	cout<<startmax<<endl;
	
}
else
{
	ll startmax=maxrest[0];
	for(ll j=0;j<maxrest.size();j++)
	{

		//cout<<maxrest[j]<<" ";
		if(startmax<maxrest[j])
		startmax=maxrest[j];

		
	}
	
	//cout<<endl;
	cout<<startmax<<endl;
}	



return 0;
}
