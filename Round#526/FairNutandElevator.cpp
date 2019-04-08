#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{
ll n;
cin>>n;

vector<ll> v(n);

ll sum=0;
for(ll i=0;i<n;i++)
{
	cin>>v[i];
	sum=sum+4*(i)*(v[i]);
}
cout<<sum<<endl;

return 0;
}
