#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n,x,y;
cin>>n>>x>>y;
vector<ll> v(n);
ll counter=0;
for(ll i=0;i<n;i++)
{
	cin>>v[i];
	if(v[i]<=x)
	counter++;
}

if(x<=y)
{
	cout<<counter/2+counter%2<<endl;
}
else
{
	cout<<n<<endl;
	
}




return 0;
}
