#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n,m,h;
cin>>n>>m>>h;

vector<ll> columns(m,0);
vector<ll> rows(n,0);

for(ll i=0;i<m;i++)
{
	cin>>columns[i];
}

for(ll i=0;i<n;i++)
{
	cin>>rows[i];
}

int a[n][m];

for(ll i=0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		cin>>a[i][j];
	}

}

for(ll i=0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		if(a[i][j]==1)
		{	
			ll min=rows[i]<columns[j]?rows[i]:columns[j];
			cout<<min<<" ";
		}
		else
		{
			cout<<0<<" ";
		}
	}
	cout<<endl;
}	

return 0;
}

