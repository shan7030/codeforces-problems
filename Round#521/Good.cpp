#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int


typedef struct node
{
ll ind;
ll no;
}node;

bool comp(node a,node b)
{
return a.no<b.no;
}

int main()
{
ll n;
cin>>n;
vector<node> v;
ll sum=0;
for(ll i=0;i<n;i++)
{
	ll x;
	cin>>x;	
	node f;
	f.no=x;	
	f.ind=(i+1);
	v.push_back(f);
	sum=sum+x;	
}

sort(v.begin(),v.end(),comp);

vector<ll> ans;

for(ll i=0;i<(n-1);i++)
{
	if(sum-v[i].no-v[n-1].no==v[n-1].no)
	{
		ans.push_back(v[i].ind);
	}
}

if(sum-v[n-2].no-v[n-1].no==v[n-2].no)
{
	ans.push_back(v[n-1].ind);
}

cout<<ans.size()<<endl;
for(ll i=0;i<ans.size();i++)
{
	cout<<ans[i]<<" ";
}
if(ans.size()!=0)
cout<<endl;
return 0;
}
