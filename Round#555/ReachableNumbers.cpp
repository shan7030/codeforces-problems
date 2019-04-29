#include<iostream>
#include<map>
using namespace std;
#define ll long long int

int main()
{

map<ll,ll> m;

ll n;
cin>>n;
m[n]=1;
n++;

ll count=1;

	while(m[n]!=1)
	{	
		
		while(n%10!=0)
		{
			if(m[n]!=1)
			{
				m[n]=1;
				count++;
				//cout<<n<<" "<<count<<endl;

			}
			n++;
			
		}
		
		ll flag=1;
		while(n%10==0)
		{
			
			n=n/10;	
			flag=0;
	
		}
		
		
	}

	cout<<count<<endl;

return 0;
}

