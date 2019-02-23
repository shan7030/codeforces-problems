#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n,k;
cin>>n>>k;

string s;
cin>>s;

vector<ll> v(k,0);

for(ll i=0;i<n;i++)
{
	v[s[i]-'A']++;
}

ll min=v[0];
for(ll i=0;i<k;i++)
{
	if(min>v[i])
	min=v[i];

}
	
cout<<k*min<<endl;

return 0;
}
