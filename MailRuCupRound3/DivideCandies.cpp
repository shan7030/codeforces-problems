#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n,m;
cin>>n>>m;
ll counter=0;

if(m==1)
{
	cout<<n*n<<endl;
	return 0;
}
for(ll i=1;i<=m;i++)
{
	for(ll j=1;j<=m;j++)
	{	
		
		if((i*i+j*j)%m==0)
		{

			ll cntA=n/m;
			if(i<=(n%m))
			cntA++;
			ll cntB=n/m;
			if(j<=(n%m))
			cntB++;
			counter=counter+cntA*cntB;
			//cout<<i<<" "<<j<<" "<<counter<<endl;
		}
	}
	
}

cout<<counter<<endl;

return 0;
}
