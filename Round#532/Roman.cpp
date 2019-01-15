#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n,k;
cin>>n>>k;

vector<ll> v(n);
vector<ll> plus(k,0);
vector<ll> neg(k,0);
ll p=0,q=0;
ll sum1=0;
for(ll i=0;i<n;i++)
{
	cin>>v[i];
	if(v[i]==1)
	{
		plus[i%k]++;
		p++;
	}
	else
	{
		neg[i%k]++;
		q++;	
	}
}	

ll ans=0;
for(ll i=0;i<k;i++)
{
	ll sum=abs((p-plus[i])-(q-neg[i]));
	if(ans<sum)
	{
		ans=sum;
	}
}
cout<<ans<<endl;

return 0;
}
