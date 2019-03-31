#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n;
string s;
cin>>n;

s=to_string(n);

ll ans=1;
for(ll i=0;i<s.length();i++)
{
	ans=ans*(s[i]-48);
}

for(ll i=0;i<s.length();i++)
{
	s=to_string(n);
	if(s[i]=='0')
	{
		continue;
	}	

	s[i]=s[i]-48-1+48;
		
	for(ll j=i+1;j<s.length();j++)
	{
		s[j]='9';
	}	
	//cout<<s<<endl;
	ll prod=1;

	ll k=0;
	for(;k<s.length();k++)
	{
		if(s[k]!='0')
		break;
	}
	for(;k<s.length();k++)
	{
		prod=prod*(s[k]-48);
	}

	if(prod>ans)
	ans=prod;	
}


cout<<ans<<endl;

return 0;
}
