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

ll lastone=n;
ll lastzero=n;

for(ll i=n-1;i>=0;i--)
{
	if(v[i]==1)
	{
		lastone=i;break;
	}
}


for(ll i=n-1;i>=0;i--)
{
	if(v[i]==0)
	{
		lastzero=i;break;
	}
}

lastone=lastone<lastzero?lastone:lastzero;

cout<<lastone+1<<endl;

return 0;
}

