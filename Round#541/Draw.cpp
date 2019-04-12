#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

vector<ll> first(n+1,0);
vector<ll> second(n+1,0);


for(ll i=1;i<=n;i++)
{
	cin>>first[i]>>second[i];
}

if(n==1)
{
	ll min=first[n]<second[n]?first[n]:second[n];
	cout<<min+1<<endl;
	return 0;
}
ll max=first[n]>second[n]?first[n]:second[n];
ll count=0;
vector<ll> v(max+1,0);

for(ll i=1;i<=n;i++)
{
	ll start1=first[i-1];
	ll end1=first[i];
	
	ll start2=second[i-1];
	ll end2=second[i];

	for(ll k=start1;k<=end1;k++)
	{
		if(k>=start2 && k<=end2)
		{
			v[k]=1;			
		}
	}
}

for(ll i=0;i<(max+1);i++)
{
	if(v[i]==1)
	count++;
}
cout<<count<<endl;



return 0;
}
