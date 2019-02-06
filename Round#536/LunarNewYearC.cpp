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

ll summer=0;
for(ll i=0;i<(n/2);i++)
{	
	summer=summer+(v[i]+v[n-i-1])*(v[i]+v[n-i-1]);

}
 
cout<<summer<<endl;

return 0;
}
