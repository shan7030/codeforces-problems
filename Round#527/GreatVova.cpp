#include<iostream>
#include<vector>
#include<stack>
using namespace std;
#define ll long long int

int main()
{
	ll n;
	cin>>n;
	vector<ll> v(n);
	stack<ll> s;	
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
		if(s.empty())
		s.push(v[i]);
		else if(abs(s.top()-v[i])%2==0)
		s.pop();
		else
		s.push(v[i]);
	}
	if(n%2==1)
	{
		s.pop();		
		if(s.empty())
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}	
	else if(n%2==0 && s.empty())
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	
return 0;
}
