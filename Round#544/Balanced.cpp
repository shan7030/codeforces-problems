#include<iostream>
#include<vector>
#include<algorithm>
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

ll i=0;

ll max=0;
ll start=0;

for(ll i=0;i<n;i++)
{
	ll count=0;

	while(std::abs(v[i]-v[start])<=5 && start<n)
	{
		start++;
		if(max<(start-i))
		max=(start-i);
	}

}

cout<<max<<endl;



return 0;
}
