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
vector<ll> a(n);
		ll counter=0;
for(ll i=0;i<(n-2);)
{
	if(v[i]==1 && v[i+1]==0 && v[i+2]==1 && v[i+3]==0 && v[i+4]==1 && (i+3)<n && (i+4)<n)
	{
		counter++;
		a[i]++;
		a[i+2]++;
		i=i+4;
	}
	else if(v[i]==1 && v[i+1]==0 && v[i+2]==1 )
	{
		counter++;i=i+3;
	}
	else
	{
		i++;
	}
	
}
ll min=0;
cout<<counter<<endl;
return 0;
}
