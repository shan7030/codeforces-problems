#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll x,y,z;
ll a,b,c;
cin>>x>>y>>z;
cin>>a>>b>>c;

if(x>a)
{
	cout<<"No"<<endl;
}
else if((x+y+z)>(a+b+c))
{
	cout<<"No"<<endl;
}
else if((a-x)+(b)<y)
{
	cout<<"No"<<endl;
}
else if(((a-x)+(b)-y+c)<z)
{
	cout<<"No"<<endl;
}
else
{
	cout<<"Yes"<<endl;
}

return 0;
}
