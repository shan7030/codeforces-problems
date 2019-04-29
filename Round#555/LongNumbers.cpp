#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;
string no;
cin>>no;

vector<char> v(9);
 
for(ll i=0;i<9;i++)
{
	cin>>v[i];
}


ll flag=-1;

for(ll i=0;i<n;i++)
{
	char ch=no[i];
	
	if(ch<v[ch-'1'])
	{
		flag=i;break;	
	}

}

if(flag==-1)
{
	
}
else
{
	ll i=flag;
	
	while(i<n && no[i]<=v[no[i]-'1'])
	{
		no[i]=v[no[i]-'1'];	
		i++;
	}
}

	cout<<no<<endl;

return 0;
}
