#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{
ll n,q;
cin>>n>>q;

vector<ll> v(n);

for(ll i=0;i<n;i++)
{
	cin>>v[i];
#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{
	
	ll n,m;
	cin>>n>>m;
	vector<ll> v(m);
	vector<ll> v1(n,0);
	string ans="";

		for(ll i=0;i<m;i++)
		{
			cin>>v[i];
		}
	ll count=0;
	for(ll i=0;i<m;i++)
	{
		
		if(v1[v[i]-1]==0)
		{
			count++;
		}
		v1[v[i]-1]++;
		if(count==n)
		{
			ll dis=0;
			for(ll j=0;j<n;j++)
			{
				v1[j]--;
				if(v1[j]!=0)
				{
					dis++;
				}	
			
			}
			cout<<"1";
			count=dis;
		}
		else
		{
			cout<<"0";
		}

	}
	
	cout<<endl;


return 0;
}
}


return 0;
}
