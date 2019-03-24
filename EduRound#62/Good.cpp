#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--)
{
	ll n;
	cin>>n;
	string s;
	cin>>s;

	if(s[0]=='>' || s[s.length()-1]=='<')
	{
		cout<<"0"<<endl;
	}	
	else
	{
		ll left=0;
		ll right=0;
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='<')
			left++;
			else
			break;
		}	

		for(ll i=n-1;i>=0;i--)
		{
			if(s[i]=='>')
			right++;
			else
			break;
		}

		left=left<right?left:right;
		cout<<left<<endl;
	}	
}



return 0;
}
