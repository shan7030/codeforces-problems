#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{

ll n,k;
cin>>n>>k;

vector<ll> v(n);

for(ll i=0;i<n;i++)
{
	cin>>v[i];
}

ll i=0;
sort(v.begin(),v.end());
ll counter=0;

while(i<n)
{
	ll start=v[i];
	ll count1=0;
	while(i<n && v[i]==start)
	{
		i++;
		count1++;
	}
	if(count1>counter)
	counter=count1;

}

//cout<<counter<<endl;
ll dishes=(counter/k);
if(dishes*k!=counter)
dishes++;

//cout<<dishes<<endl;
i=0;
ll distinct=0;

while(i<n)
{
	distinct++;
	ll x=v[i];
	while(i<n && v[i]==x)
	i++;

}
cout<<distinct*dishes*k-n<<endl;

return 0;
}
