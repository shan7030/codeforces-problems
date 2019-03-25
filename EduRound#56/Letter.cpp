#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

string s;
while(t--)
{
	cin>>s;
	ll i=0;
	ll n=s.length();
	ll count=0;
	
	for(ll i=0;i<n;i++)
	{
		if(s[0]==s[i])
		{
			count++;
		}
	}
	if(count==n)
	{
		cout<<"-1"<<endl;
	}
	else 
	{
		ll i;
		for( i=0;i<n;i++)
		{
			if(s[i]!=s[n-1-i])
			break;
		}
		if(i==n)
		{
			for(ll i=0;i<n;i++)
			{
				if(s[i]!=s[i+1])
				{
					char t=s[i];
					s[i]=s[i+1];
					s[i+1]=t;break;
				}
			}
			cout<<s<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
	}
}


return 0;
}
