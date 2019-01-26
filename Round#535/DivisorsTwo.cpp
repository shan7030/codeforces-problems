#include<iostream>
#include<vector>
#include<map>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;
vector<ll> v(n);
map<ll,ll> m,m2;
ll max=0;
for(ll i=0;i<n;i++)
{
	
	cin>>v[i];
	m[v[i]]++;
	m2[v[i]]++;
	if(v[i]>max)
	max=v[i];
}

cout<<max<<" ";

for(ll i=0;i<n;i++)
{
	if(max%v[i]==0 && m[v[i]]==m2[v[i]])
	{
	
		m[v[i]]--;
		
	}
	
}


map<ll,ll>::iterator it=m.begin();
ll mul=1;
while(it!=m.end())
{
if(it->second>0)
{
	if(it->first>mul)
	mul=it->first;
}

it++;
}

cout<<mul<<endl;

return 0;
}
