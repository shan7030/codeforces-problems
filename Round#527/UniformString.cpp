#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ll t;
cin>>t;
		ll n,k;
	while(t--)
	{
	
		cin>>n>>k;
		string to="";
		ll freq=n/k;
		char ch='a';
		ll k1=k;
		while(k1--)
		{
			to=to+ch;ch++;
			if(ch=='z'+1)
			ch='a';
		}
		string ans="";	
		while(freq--)
		{
			ans=ans+to;
		}	
		if(n%k!=0)
		{
			for(ll i=0;i<(n%k);i++)
			ans=ans+to[i];
		}
		cout<<ans<<endl;
	}

return 0;
}
