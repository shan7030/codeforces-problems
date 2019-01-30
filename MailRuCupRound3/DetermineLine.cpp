#include<iostream>
#include<vector>

using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;
vector<ll> v(101,0);
ll ko=n;
while(n--)
{
	ll k;
	cin>>k;
	while(k--)
	{
		ll vp;
		cin>>vp;
		v[vp]++;

	}

}

for(ll i=1;i<=100;i++)
{
	if(v[i]==ko)
	{
		cout<<i<<" ";
	}	
		
}


return 0;
}
