#include<iostream>
#include<vector>
using namespace std;
#define ll long long int


int main()
{
ll n;
cin>>n;

vector<string> v(n);

for(ll i=0;i<n;i++)
{
	cin>>v[i];	
}

ll flag=0;

for(ll i=0;i<n;i++)
{
	for(ll j=0;j<n;j++)
	{
		if(v[i][j]=='.')
		{
			if(j==0 || j==n-1 || i==n-1 || i==n-2)
			{
				cout<<"NO"<<endl;
				return 0;	
			}
			else
			{
				if(v[i+1][j-1]!='.' || v[i+1][j+1]!='.' || v[i+1][j]!='.' || v[i+2][j]!='.')
				{
					cout<<"NO"<<endl;
					return 0;
				}
				else
				{
					v[i+1][j]='#';
					v[i+1][j-1]='#';
					v[i+1][j+1]='#';
					v[i+2][j]='#';
				}
			}		
		}
	}
}

cout<<"YES"<<endl;

return 0;
}
