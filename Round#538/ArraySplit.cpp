#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long int

typedef struct node
{
ll no;
ll ind;
}node;

bool comp(node f1,node f2)
{
	return f1.no>f2.no;
}

int main()
{

	ll n,m,k;

	cin>>n>>m>>k;

	vector<ll> v(n);
	vector<node> v1(n);
	vector<ll> v2;
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
		node f;
		f.no=v[i];
		f.ind=i;
		v1[i]=f;
	}	
	sort(v1.begin(),v1.end(),comp);
	ll sum=0;
	
	for(ll i=0;i<k*m;i++)
	{
		sum=sum+v1[i].no;
		v2.push_back(v1[i].ind);
	}
	cout<<sum<<endl;
	sort(v2.begin(),v2.end());
	ll counter=0;
	vector<node> v3;
	ll prev=0;
	for(ll i=0;i<v2.size();)
	{
		node f;
		f.no=prev;
		ll counter=0;
		while(counter<m && i<v2.size())
		{
			counter++;i++;
		}
		if(i<v2.size())
		f.ind=v2[i]-1;
		else
		f.ind=n-1;
		prev=v2[i]-1;
		v3.push_back(f);
	}

	for(ll i=1;i<v3.size();i++)
	{
		cout<<v3[i].no+1<<" ";
	}
	
	

	
return 0;
}
