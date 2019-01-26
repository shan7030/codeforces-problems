#include<iostream>
using namespace std;
#define ll long long int

int main()
{

string s;
cin>>s;
ll n=s.length();

ll i=0;
ll start=0;
ll ki=0;
while(i<n)
{
	if(s[i]=='0')
	{	
		cout<<"1 "<<start+1<<endl;
		start=(start+1)%4;		
	}	
	else
	{
		cout<<"3 "<<ki+1<<endl;
		if(ki==0)
		{
			ki=2;
		}
		else
		{	
			ki=0;
		}			
	}

i++;
}


return 0;
}

