#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

typedef struct node
{
ll cost;
ll ind;

}node;

bool comp(node a,node b)
{
		
	return a.cost<b.cost;

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,t;
cin>>n>>t;

vector<node> v(n);
vector<ll> a(n);
vector<ll> c(n);
for(ll i=0;i<n;i++)
{
	cin>>a[i];
}

for(ll i=0;i<n;i++)
{
	cin>>v[i].cost;
	v[i].ind=i;
	c[i]=v[i].cost;
}

sort(v.begin(),v.end(),comp);

ll flag=0;
ll start=0;

while(t--)
{
	ll type,quantity;
	cin>>type>>quantity;
	type--;	
	ll sum=0;
	
		ll min=a[type]<quantity?a[type]:quantity;
			
		a[type]=a[type]-min;
	
		sum=sum+min*c[type];
		quantity=quantity-min;
		
	while(quantity>0 && start<n)
	{	
		ll ind1=v[start].ind;
		ll min=a[ind1]<quantity?a[ind1]:quantity;
		
		sum=sum+min*c[ind1];
		quantity=quantity-min;
		a[ind1]=a[ind1]-min;
		if(a[ind1]==0)
		{
		
			start++;
		}		
		
	}
	if(quantity==0)
	cout<<sum<<endl;
	else
	cout<<0<<endl;
}


return 0;
}
