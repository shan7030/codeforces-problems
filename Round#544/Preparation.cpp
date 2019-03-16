#include<iostream>
#include<vector>

using namespace std;
#define ll long long int

int main()
{

ll n,k;
cin>>n>>k;

vector<ll> v(n);

vector<ll> count(k,0);

for(ll i=0;i<n;i++)
{
	cin>>v[i];

	count[v[i]%k]++;
}


ll counter=0;


if(k%2==0)
{
	counter=counter+count[0]/2;
	counter=counter+count[k/2]/2;
	for(ll i=1;i<(k/2);i++)
	{
			ll min=count[i]<count[k-i]?count[i]:count[k-i];
			counter=counter+min;
		
	}	
		
}
else
{
	counter=counter+count[0]/2;

	for(ll i=1;i<=(k/2);i++)
	{
			ll min=count[i]<count[k-i]?count[i]:count[k-i];
			counter=counter+min;
	}	
	
}

cout<<counter*2<<endl;

return 0;
}
