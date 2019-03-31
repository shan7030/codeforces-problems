#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
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

ll flag=0;
map<ll,ll> m;
vector<ll> even,odd;

for(ll i=0;i<n;i++)
{
	m[v[i]]++;
	if(m[v[i]]==1)
	{
		even.push_back(v[i]);
	}
	else if(m[v[i]]==2)
	{
		odd.push_back(v[i]);
	}
	
	if(m[v[i]]>2)
	{
		flag=1;
		break;
	}
}

if(flag==1)
{
	cout<<"NO"<<endl;
}
else
{
	sort(odd.begin(),odd.end(),greater<ll> ());
	cout<<"YES"<<endl;
	cout<<even.size()<<endl;
	
	for(ll i=0;i<even.size();i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<endl;

	cout<<odd.size()<<endl;
	
	for(ll i=0;i<odd.size();i++)
	{
		cout<<odd[i]<<" ";	
	}

	cout<<endl;
	
}


return 0;
}
