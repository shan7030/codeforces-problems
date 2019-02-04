#include<iostream>
using namespace std;
#define ll long long int

int main()
{

string s1,s2;
cin>>s1;
cin>>s2;

if(s1.length()!=s2.length())
{
	cout<<"No"<<endl;
	return 0;
}
ll n=s1.length();
for(ll i=0;i<n;i++)
{
	if(s1[i]=='a' or s1[i]=='e' or s1[i]=='i' or s1[i]=='o' or s1[i]=='u' )
	{
		if(s2[i]!='a' && s2[i]!='o' && s2[i]!='e' && s2[i]!='i' && s2[i]!='u')
		{
			cout<<"No"<<endl;
			return 0;
		}
	}
	else
	{	
		if(s2[i]=='a' or s2[i]=='e' or s2[i]=='i' or s2[i]=='o' or s2[i]=='u' )
		{
			cout<<"No"<<endl;
			return 0;
		}
	}	
}

cout<<"Yes"<<endl;



return 0;
}
