#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

vector<ll> v(n+1);
map<ll,ll> m;

ll count=0;
ll no=0;
ll ind=-1;

for(ll i=0;i<n;i++)
{
	cin>>v[i];
	m[v[i]]++;
	if(m[v[i]]>count)
	{
		count=m[v[i]];
		no=v[i];
		ind=i;
	}
}

ll tm=ind;

ll val=no;


cout<<n-count<<endl;


ll start=ind-1;
ll insp=ind;

while(start>=0)
{

		//cout<<"Here1"<<endl;
	if(v[start]!=no)
	{
		if(v[start]<no)
		{
			cout<<"1 "<<start+1<<" "<<insp+1<<endl;	
		}
		else
		{
			
			cout<<"2 "<<start+1<<" "<<insp+1<<endl;
		}
	}
	start--;
	insp--;
}

start=ind;
insp=ind+1;

while((insp)<n)
{


	if(v[insp]!=no)
	{
		if(v[insp]<no)
		{
			cout<<"1 "<<insp+1<<" "<<start+1<<endl;	
		}
		else
		{
			
			cout<<"2 "<<insp+1<<" "<<start+1<<endl;
		}	
	}
	start++;	
	insp++;
}




return 0;
}
