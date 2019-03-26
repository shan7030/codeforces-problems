#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

vector<ll> start(n),end(n);

for(ll i=0;i<n;i++)
{
	cin>>start[i]>>end[i];
}

ll k;
cin>>k;

ll count=0;

for(ll i=0;i<n;i++)
{
	if(k<=end[i])
	{
		break;
	}
	count++;
}

cout<<(n-count)<<endl;

return 0;
}
