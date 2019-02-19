#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ll t;
cin>>t;

while(t--)
{
	ll n,a,b;
	cin>>n>>a>>b;
	ll cost1=n*a;
	ll cost2=(n/2)*b+(n%2)*a;

	cost1=cost1<cost2?cost1:cost2;
	cout<<cost1<<endl;
	
}

return 0;
}	
