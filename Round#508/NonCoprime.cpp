#include<iostream>
using namespace std;
#define ll long long int

ll gcd(ll a,ll b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int main()
{

ll n;
cin>>n;

ll sum=(n*(n+1))/2;

if(n==1)
{
	cout<<"No"<<endl;
}
else
{
	ll flag=0;
	for(ll i=2;i<=n;i++)
	{
		if(gcd(i,sum-i)>=2)
		{
			sum=i;
			flag=1;break;
		}
	}
	if(flag==1)
	{
		cout<<"Yes"<<endl;
		cout<<"1 "<<sum<<endl;
		cout<<(n-1)<<" ";
		//ll sum2=0;
		for(ll i=1;i<=n;i++)
		{
			if(i!=sum)
			{
				//sum2=sum2+i;
				cout<<i<<" ";
			}

		}
		//cout<<sum2<<endl;	 
	}	
	else
	{
		cout<<"No"<<endl;
	}

}

return 0;
}
