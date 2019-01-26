#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
string s;
cin>>s;

string by3="";
vector<ll> kl(6,0);
string ans="";

ll i=0;
string a1="RGB";
string a2="RBG";
string a3="GRB";
string a4="GBR";
string a5="BGR";
string a6="BRG";




ll maxind=0;

vector<ll> v(6,0);
for(ll i=0;i<n;i++)
{	
	if(s[i]!=a1[i%3])
	{
		v[0]++;
	}
	if(s[i]!=a2[i%3])
	{
		v[1]++;
	}
	if(s[i]!=a3[i%3])
	{
		v[2]++;
	}
	if(s[i]!=a4[i%3])
	{	
		v[3]++;
	}
	if(s[i]!=a5[i%3])
	{
		v[4]++;
	}
	if(s[i]!=a6[i%3])
	{
		v[5]++;
	}		
}

 maxind=0;
ll diff=v[0];
for(ll i=0;i<6;i++)
{
	if(v[i]<v[maxind])
	{
		maxind=i;
		diff=v[i];
	}
}

cout<<diff<<endl;
if(maxind==0)
{
	
	for(ll i=0;i<n;i++)
	{
		cout<<a1[i%3];
	}
}
else if(maxind==1)
{
	
	for(ll i=0;i<n;i++)
	{
		cout<<a2[i%3];
	}
}
else if(maxind==2)
{
	
	for(ll i=0;i<n;i++)
	{
		cout<<a3[i%3];
	}
}	
else if(maxind==3)
{
	
	for(ll i=0;i<n;i++)
	{
		cout<<a4[i%3];
	}
}
else if(maxind==4)
{
	
	for(ll i=0;i<n;i++)
	{
		cout<<a5[i%3];
	}
}
else if(maxind==5)
{
	
	for(ll i=0;i<n;i++)
	{
		cout<<a6[i%3];
	}
}
return 0;
}
