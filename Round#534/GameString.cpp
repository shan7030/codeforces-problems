#include<iostream>
#include<stack>
using namespace std;
#define ll long long int

int main()
{
string s;
cin>>s;
ll n=s.length();

ll count=0;
stack<char> s1;

for(ll i=0;i<n;i++)
{
	if(s1.empty())
	{
		s1.push(s[i]);
	}
	else if(s1.top()==s[i])
	{
		count++;
		s1.pop();
	}
	else
	{
		s1.push(s[i]);
	}
}

if(count%2==1)
{
	cout<<"Yes"<<endl;
}
else
{
	cout<<"No"<<endl;
}	





return 0;
}
