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

ll counter=v[n-1];
ll start=v[n-1];

for(ll i=n-2;i>=0;i--)
{
	if(start>v[i])
	{
		start=v[i];
	}	
	else if(start==v[i])
	{
		start--;
	}
	else
	{
		start=start-1;
	}
	if(start<=0)
	break;
	counter=counter+start;
}

cout<<counter<<endl;
return 0;
}
