#include<iostream>
using namespace std;
#define ll long long int 

int main()
{
ll k;
cin>>k;
string s;
cin>>s;
ll n=s.length();

ll max=s[0];
ll ind=-1;
for(ll i=0;i<(n-1);i++)
{
	if(s[i]>s[i+1])
	{	
		//cout<<max<<endl;
		max=s[i];
		ind=i;
		break;
	}
}

if(n==1)
{
	cout<<s<<endl;
	return 0;
}
if(ind==-1)
{
	cout<<s.substr(0,n-1)<<endl;
	return 0;
}
for(ll i=0;i<n;i++)
{
	if(i==ind)
	{
		

	}
	else
	{
		cout<<s[i];
			
	}		
}
cout<<endl;
return 0;
}
