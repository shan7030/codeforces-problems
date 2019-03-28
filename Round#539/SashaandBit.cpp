#include<iostream>
#include<vector>
using namespace std;
#define ll long long int 

int main()
{

ll n;
cin>>n;

vector<ll> v(n);
vector<ll> xorr(n,0);

ll max=0;
for(ll i=0;i<n;i++)
{
	cin>>v[i];
	if(v[i]<max)
	max=v[i];
}
ll ans=0;

vector<vector<ll>> count(1<<20+1,vector<ll> (2,0));

ll x=0;
    count[0][1] = 1;
for(ll i=0;i<n;i++)
{
	x=x^v[i];
	ans=ans+count[x][i%2];
	count[x][i%2]++;
}

cout<<ans<<endl;
return 0;
}
