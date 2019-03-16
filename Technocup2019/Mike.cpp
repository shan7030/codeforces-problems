#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<iterator>
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

	
ll min=v[0]+v[1];
ll max=v[n-1]+v[n-2];


ll finalmax=0;
/*
for(ll i=min;i<=max;i++)
{
	map<ll,ll> m;
	for(ll j=0;j<n;j++)
	{
		m[v[j]]++;
	}

	ll count=0;
	
	for(ll j=0;j<n;j++)
	{

		if(m[v[j]]!=0)
		{
			m[v[j]]--;
			if(m[i-v[j]]!=0)
			{
				count++;
				m[i-v[j]]--;	
			}
			else
			{

					m[v[j]]++;
			}
	
		}
		
	}



	if(count>=finalmax)
	finalmax=count;
	
		

}
*/

map<ll,ll> m;

for(ll i=0;i<n;i++)
{
	for(ll j=i+1;j<n;j++)
	{

		m[v[i]+v[j]]++;


	}
}

map<ll,ll>::iterator it=m.begin();
finalmax=0;
ll ans=0;

while(it!=m.end())
{
	
if(it->second>finalmax)
{
	finalmax=it->second;
	ans=it->first;
}


it++;
}	

cout<<finalmax<<endl;




return 0;
}
