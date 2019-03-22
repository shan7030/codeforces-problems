#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;
string s;
cin>>s;

ll counter=0;

for(ll i=0;i<n;i++)
{
	if((s[i]-'0')%2==0)
	{
		counter=counter+i+1;
	}
}


cout<<counter<<endl;

return 0;
}
