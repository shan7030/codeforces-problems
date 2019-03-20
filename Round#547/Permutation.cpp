#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;
n--;
vector<ll> v(n);

for(ll i=0;i<n;i++)
{
	cin>>v[i];
}

vector<ll> p;
vector<ll> ans(n+1,0);

ll min=200100;
ans[0]=1;
for(ll i=1;i<(n+1);i++)
{
	ans[i]=ans[i-1]+v[i-1];
	if(ans[i]<min)
	min=ans[i];
}

if(min<=0)
{


for(ll i=0;i<(n+1);i++)
{
	ans[i]=ans[i]+abs(min)+1;
}

}

vector<ll> used(n+2,0);

for(ll i=0;i<(n+1);i++)
{
	if(ans[i]<=(n+1) && used[ans[i]]==0)
	used[ans[i]]=1;
	else
	{
		cout<<"-1"<<endl;
		return 0;
	}
}

for(ll i=0;i<(n+1);i++)
{
	cout<<ans[i]<<" "; 
}



return 0;
}
