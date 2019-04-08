#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main()
{
ll n,s;
cin>>n>>s;
vector<ll> v(n);
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
		sum=sum+v[i];
	}
	sort(v.begin(),v.end());
	vector<ll> diif(n,0);
	ll sumofdiff=0;
	ll min=v[0];
	for(ll i=0;i<n;i++)
	{
		
		sumofdiff=sumofdiff+v[i]-min;
			
	}

	if(sumofdiff>=s)
	{
		cout<<v[0]<<endl;
	}
	else
	{
		if(sum<s)
		{
			cout<<"-1"<<endl;
		}	
		else if(sum==s)
		{
			cout<<"0"<<endl;
		}
		else
		{
			s=s-sumofdiff;
			ll counter=0;
			while(s>0)
			{
				s=s-n;
				counter++;
			}
			cout<<(min-counter)<<endl;
		}
	}
	



return 0;
}
