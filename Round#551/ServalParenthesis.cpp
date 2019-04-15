#include<iostream>
#include<vector>
#include<stack>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;
string s;
cin>>s;

if(s.length()==0)
{
	cout<<""<<endl;
		return 0;
}

if(s.length()==1)
{
	cout<<":("<<endl;
	return 0;
}

if(s[0]==')')
{
	cout<<":("<<endl;
	return 0;
}

if(s[0]=='?')
{
	s[0]='(';
}

if(s[n-1]=='(')
{
	cout<<":("<<endl;
	return 0;
}

if(s[n-1]=='?')
{
	s[n-1]=')';	
}

string a="";
ll count1=0;
ll count2=0;
for(ll i=1;i<(n-1);i++)
{
	a=a+s[i];		
}

stack<char> s1;

if(a[0]=='?')
{
	a[0]='(';
}

if(a[0]==')')
{
	cout<<":(";
	return 0;
}

if(a[a.length()-1]=='?')
{
	a[a.length()-1]=')';
}

if(a[a.length()-1]=='(')
{
	cout<<":("<<endl;
	return 0;
}


if(a.length()%2!=0)
{
	cout<<":("<<endl;
	return 0;
}
//cout<<a<<endl;
string finalans="";
//cout<<"\n\n\n"<<endl;
for(ll i=0;i<a.length();i++)
{
	//cout<<finalans<<endl;
	if(a[i]=='(')
	{
	finalans=finalans+a[i];
	s1.push(a[i]);
	}	
	else if(a[i]==')')
	{
		if(!s1.empty())
		{
			finalans=finalans+a[i];
			s1.pop();
		}
		else
		{
			cout<<":("<<endl;
			return 0;
		}
	}
	else
	{
		if(!s1.empty())
		{
			finalans=finalans+")";
			s1.pop();
		}
		else
		{
			finalans=finalans+"(";
			s1.push('(');
		}
	}
}

cout<<"("<<finalans<<")"<<endl;


return 0;
}

