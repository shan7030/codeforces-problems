#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{

ll n,m,k;

cin>>n>>m>>k;

vector<ll> max(m,0);
vector<ll> v1(n),v2(n);

for(ll i=0;i<n;i++)
{
	cin>>v1[i];
}	


for(ll i=0;i<n;i++)
{
	cin>>v2[i];
}	

for(ll i=0;i<n;i++)
{
	if(v1[i]>max[v2[i]-1])
	{
		max[v2[i]-1]=v1[i];
	}
	
}


vector<ll> verify(k);

ll counter=0;

for(ll i=0;i<k;i++)
{
	ll t;
	cin>>t;
	//cout<<max[v2[t-1]-1]<<" "<<v1[t-1]<<endl;
	if(max[v2[t-1]-1]!=v1[t-1])
	counter++;
}


cout<<counter<<endl;



return 0;
}

