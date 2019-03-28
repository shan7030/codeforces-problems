#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n,v;
cin>>n>>v;

if((v)>=(n-1))
{
	cout<<(n-1)<<endl;	
}
else
{
	ll end=n-1;
	ll start=v;
	ll cost=v;
	end=end-v+1;
	cost=cost+(end*(end+1))/2-1;
	cout<<cost<<endl;
}


return 0;
}
