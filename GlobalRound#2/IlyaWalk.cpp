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
ll ans=n-1;
for(ll i=n-1;i>=0;i--)
{
	if(v[i]!=v[0])
	break;
	ans--;
}


ll ans2=n-1;
for(ll i=0;i<n;i++)
{
	if(v[i]!=v[n-1])
	break;
	ans2--;
}

ans=ans>ans2?ans:ans2;

cout<<ans<<endl;
return 0;
}
