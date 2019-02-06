#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;
char a[n][n];

for(ll i=0;i<n;i++)
{
	for(ll j=0;j<n;j++)
	cin>>a[i][j];

}

ll counter=0;
	
for(ll i=0;i<n;i++)
{
	for(ll j=0;j<n;j++)
	{
		
		if(a[i][j]=='X')
		{
			ll c=0;
			if((i-1)>=0 && (j-1)>=0 && a[i-1][j-1]=='X')
			{
				c++;		
			}
			if((i-1)>=0 && (j+1)<n && a[i-1][j+1]=='X')
			{
				c++;		
			}
			if((i+1)<n && (j-1)>=0 && a[i+1][j-1]=='X')
			{
				c++;		
			}
			if((i+1)<n && (j+1)<n && a[i+1][j+1]=='X')
			{
				c++;		
			}
			if(c==4)
		counter++;
		}	
		
	}	

}

cout<<counter<<endl;

return 0;
}
