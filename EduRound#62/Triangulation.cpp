#include<iostream>
using namespace std;
#define ll long long int


int main()
{

ll ans=0;

ll n;
cin>>n;

for(ll i=2;i<(n);i++)
{
	ans=ans+i*(i+1);
}

cout<<ans<<endl;

return 0;
}
