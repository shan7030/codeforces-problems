#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

const ll M=1e9+7;
const ll N=2e5 + 5;

vector<ll> visited(N,0);
vector<vector<ll> > g(N);
ll sz=0;

ll pow(ll a,ll b,ll M)
{

	ll ans=1;
		
	while(b)
	{
		if(b&1)
		{
			ans=(ans*a)%M;
		}
		b=b/2;
		a=(a*a)%M;
	}

	return ans;

}

void dfs(ll ik)
{

	if(visited[ik]==1)
	return ;

	sz++;
	visited[ik]=1;

	for(ll k=0;k<g[ik].size();k++)
	{
		dfs(g[ik][k]);
	}

	

}
int main()
{

ll n,k;
cin>>n>>k;

ll ans=pow(n,k,M);

for(ll i=1;i<n;i++)
{
	ll u,v,l;
	cin>>u>>v>>l;
	if(l==0)
	{
		g[u].push_back(v);
		
		g[v].push_back(u);
	}	
}


for(ll i=1;i<=n;i++)
{
	if(visited[i]==1)
	continue;

	sz=0;
	dfs(i);
	//cout<<sz<<endl;
	ans=ans-pow(sz,k,M);
	ans=ans+M;
	ans=ans%M;
}


cout<<ans<<endl;

return 0;
}
