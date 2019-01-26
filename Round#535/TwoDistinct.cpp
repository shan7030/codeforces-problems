#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

ll x,y,a,b;
while(t--)
{	
	cin>>x>>y>>a>>b;
	cout<<x<<" ";
	if(x!=a)
	{
		cout<<a<<endl;
	}
	else if(y!=b)
	{
		cout<<b<<endl;
	}	
	else	
	{
		cout<<x+1<<endl;
	}

}

return 0;
}
