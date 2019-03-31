#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

vector<ll> even;
vector<ll> odd;

for(ll i=0;i<n;i++)
{
	ll no;
	cin>>no;
	if(no%2==0)
	{
		even.push_back(no);
	}
	else
	{
		odd.push_back(no);
	}
}

sort(even.begin(),even.end(),greater<ll> ());
sort(odd.begin(),odd.end(),greater<ll> ());

ll n1=even.size();
ll n2=odd.size();

ll min=n1<n2?n1:n2;

if(min==n1)
{
	ll  ans=0;
	for(ll i=n1+1;i<n2;i++)
	{
		ans=ans+odd[i];
	}

	cout<<ans<<endl;
}
else
{
	ll ans=0;
	for(ll i=n2+1;i<n1;i++)
	{
		ans=ans+even[i];
	}

	cout<<ans<<endl;
}

return 0;
}
