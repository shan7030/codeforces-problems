#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;
vector<ll> v(n);

for(ll i=0;i<n;i++)
{
	cin>>v[i];
}
ll counter=0;
vector<vector<ll>> eo(n,vector<ll> (2,0));

for(ll i=1;i<n;i++)
{
	eo[0][i%2]=eo[0][i%2]+v[i];
}

ll num=0;
ll num2=0;
for(ll i=1;i<n;i++)
{
	if(i%2==1)
	{
		num=1;
		num2=0;	
	}
	else
	{
		num=0;
		num2=1;
	}

	eo[i][num]=eo[i-1][num]+v[i-1]-v[i];
	eo[i][num2]=eo[i-1][num2];
}

for(ll i=0;i<n;i++)
{
	//cout<<eo[i][1]<<" ";
	if(eo[i][0]==eo[i][1])
	counter++;
}


cout<<counter<<endl;

return 0;
}
