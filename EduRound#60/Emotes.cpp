#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{

ll n,m,k;
cin>>n>>m>>k;
vector<ll> v(n);

for(ll i=0;i<n;i++)
{
	cin>>v[i];
}
sort(v.begin(),v.end(),greater<ll> ());

ll max=v[0];
ll max2=v[1];
unsigned long long int ans=0;
ll toreach=m;

ll div=toreach/(k+1);

ll div2=toreach-(k+1)*(div);

ans=div*max2+k*max*(div)+div2*max;
cout<<ans<<endl;

return 0;
}
