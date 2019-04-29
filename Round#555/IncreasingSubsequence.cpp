#include<iostream>
#include<vector>
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

ll max=0;

ll count=0;
ll i=0;
ll j=n-1;
string ans="";

while(count<n)
{
	ll min1=v[i]<v[j]?v[i]:v[j];
	ll max1=v[i]>v[j]?v[i]:v[j];

	if(min1>=max)
	{
		if(min1==v[i])
		{
			ans=ans+'L';
		
			i++;
		}
		else
		{
			ans=ans+'R';
			j--;
		}
		max=min1;	
	}
	else if(max1>=max)
	{
		if(max1==v[i])
		{
			ans=ans+'L';
		
			i++;
		}
		else
		{
			ans=ans+'R';
			j--;
		}
			max=max1;
	}
	else
	{
		break;
	}

	count++;

}
cout<<ans.length()<<endl;
cout<<ans<<endl;


return 0;
}
