#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

vector<ll> v(n);
ll count=0;
for(ll i=0;i<n;i++)
{
	cin>>v[i];
	count=count+v[i];

}
ll m;
cin>>m;

vector<ll> a(m);
sort(v.begin(),v.end());


for(ll i=0;i<m;i++)
{
	cin>>a[i];
	cout<<count-v[n-a[i]]<<endl;
	 
}





return 0;
}
