#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

vector<ll> v1(n),v2(n);

for(ll i=0;i<n;i++)
{
	cin>>v1[i];
}


for(ll i=0;i<n;i++)
{
	cin>>v2[i];
}

sort(v1.begin(),v1.end(),greater<ll> ());
sort(v2.begin(),v2.end(),greater<ll> ());

ll k=v1.size()+v2.size();
ll a=0;
ll b=0;

ll i=0;
ll j=0;
while(k--)
{
	if(v1[i]>=v2[j] && (i+j)%2==0 && i<v1.size())
	{
		a=a+v1[i];
		i++;
	}
	else if(v1[i]<v2[j] && (i+j)%2==0 && j<v2.size())
	{
		j++;
	}
	else if(v1[i]>v2[j] && (i+j)%2==1 && i<v1.size())
	{
		
		i++;
	}
	else if(v1[i]<=v2[j] && (i+j)%2==1 && j<v2.size())
	{
		b=b+v2[j];
		j++;
	}
	else if((i+j)%2==0 && (i>=v1.size()))
	{
		
		j++;
	}
	else if((i+j)%2==1 && (j>=v2.size()))
	{
		i++;
	}
	else if((i+j)%2==1 && (i>=v1.size()))
	{
		b=b+v2[j];
		j++;
	}
	else if((i+j)%2==0 && (j>=v2.size()))
	{
		a=a+v1[i];
		i++;
	}
}
//cout<<a<<" "<<b<<endl;
cout<<(a-b)<<endl;
return 0;
}
