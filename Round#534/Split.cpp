#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

ll ans=9;
int i;
for(i=9;i>=1;i--)
{
	if(n%i==0)
	{
		break;
	}
}	

cout<<(n/i)<<endl;
for(ll j=0;j<(n/i);j++)
{
	cout<<i<<" "; 
}
return 0;
}
