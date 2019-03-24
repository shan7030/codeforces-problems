#include<iostream>
#include<vector>
using namespace std;
#define ll long long int


int main()
{

ll n;
cin>>n;

vector<ll> v(n);
ll counter=0;

ll  max=0;

for(ll i=0;i<n;i++)
{
	cin>>v[i];
	if(v[i]>max)
	max=v[i];	
	else
	v[i]=max;
}

for(ll i=0;i<n;i++)
{
	if(v[i]==i+1)
	counter++;
}
	
cout<<counter<<endl;


return 0;
}
