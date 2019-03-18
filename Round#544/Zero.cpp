#include<iostream>
#include<vector>
#include<map>
#include<iterator>
using namespace std;
#define ll long long int
#define pii pair<int, int>
ll gcd(ll a,ll b)
{

	if(a==0 && b==0)
	return 1;
	if(a==0)
	return b;
	else if(b==0)
	return a;

	return gcd(b%a,a);
}	

typedef struct node
{
ll ar,br;

}node;


bool operator<(const node& t1, const node& t2) 
{ 
    return ((t1.ar < t2.ar) && (t1.br < t2.br)); 
} 

int main()
{

ll n;
cin>>n;

vector<ll> a(n),b(n);

for(ll i=0;i<n;i++)
{
	cin>>a[i];
}


for(ll i=0;i<n;i++)
{
	cin>>b[i];
}

map<pii,ll> m;
ll d0=0;
for(ll i=0;i<n;i++)
{
	if(b[i]<0)
	{
		b[i]=b[i]*(-1);
		a[i]=a[i]*(-1);
	}
	if(a[i]==0 && b[i]==0)
	{
		d0++;
		continue;
	}
	ll gcdd=gcd(a[i],b[i]);
	node a1;
	a1.ar=(a[i]/gcdd);
	a1.br=(b[i]/gcdd);
	if(a1.ar==0 && a1.br!=0)
	{
		continue;		
	}
	m[{a1.ar,a1.br}]++;	
}

ll max=0;



for (auto x : m) 
{
	//cout<<x.first.ar<<" "<<x.first.br<<" "<<x.second<<endl;
		
			
			if(max<x.second)
			max=x.second;
		
}
cout<<max+d0<<endl;



return 0;
}
