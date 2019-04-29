#include<iostream>
#include<vector>
#include<set>
using namespace std;
#define ll long long int

int main()
{
ll n;
cin>>n;

vector<ll> a(n);
multiset<ll> b;

for(ll i=0;i<n;i++)
{
	cin>>a[i];
}

for(ll i=0;i<n;i++)
{
	ll k;
	cin>>k;
	b.insert(k);
}	

for(ll i=0;i<n;i++)
{
	auto it=b.lower_bound(n-a[i]);	
	
	if(it==b.end())
	{		
		it=b.begin();
	}		
	cout<<(*it+a[i])%n<<" ";
	
	b.erase(it);
}







return 0;
}
