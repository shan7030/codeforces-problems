#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;
vector<ll> v(n);

ll max=0;
for(ll i=0;i<n;i++)
{
	cin>>v[i];
	if(v[i]>max)
	max=v[i];
}

ll count2=0;
//cout<<max<<endl;
for(ll i=0;i<n;)
{
	ll count=0;
	
	if(v[i]==max)
	{

		while(v[i]==max && i<n)
		{
			count++;
			i++;
		}
	}
	else
	i++;
	if(count2<count)
	count2=count;	


}

cout<<count2<<endl;


return 0;
}
