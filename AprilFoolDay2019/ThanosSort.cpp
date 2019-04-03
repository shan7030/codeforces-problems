#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

ll count=0;

vector<ll> v(n);

for(ll i=0;i<n;i++)
{
	
	cin>>v[i];
}

if(n==1)
{
	cout<<"1"<<endl;
	return 0;

}
else if(n==2)
{
	if(v[1]>=v[0])
	{
		cout<<"2"<<endl;
	}
	else
	{
		cout<<"1"<<endl;
	}
}
else if(n==4)
{
	ll i;
	for( i=0;i<3;i++)
	{
		if(v[i]<=v[i+1])
		{
			
		}
		else
		break;	
	}

	if(i==3)
	{
		cout<<"4"<<endl;
	}
	else
	{
		if(v[0]<=v[1] || v[2]<=v[3])
		{
			cout<<"2"<<endl;
		}
		else
		cout<<"1"<<endl;
	}
	
}
else if(n==8)
{

	ll i;
	for(i=0;i<7;i++)
	{
		if(v[i]<=v[i+1])
		{
			
		}
		else
		break;
	}

	if(i==7)
	{
		cout<<"8"<<endl;
	}
	else
	{

				for( i=0;i<3;i++)
				{
					if(v[i]<=v[i+1])
					{
						
					}
					else
					break;	
				}

			

				ll j=0;
				for(j=4;j<7;j++)
				{
					if(v[j]<=v[j+1])
					{
					
					}
					else
					break;
				
				}
			
				if(i==3 || j==7)
				{
					cout<<"4"<<endl;
				}
				else
				{
					if(v[0]<=v[1] || v[2]<=v[3] || v[4]<=v[5] || v[6]<=v[7]  )
					{
						cout<<"2"<<endl;
					}
					else
					cout<<"1"<<endl;
				}


	}

}
else if(n==16)
{
	ll i=0;
	for(i=0;i<15;i++)	
	{
		if(v[i]<=v[i+1])
		{
			
		}
		else
		break;
	}

	if(i==15)
	{
		cout<<"16"<<endl;
	}
	else
	{
		ll i;

		ll ans1=0;
		ll ans2=0;
	for(i=0;i<7;i++)
	{
		if(v[i]<=v[i+1])
		{
			
		}
		else
		break;
	}

	

	if(i==7)
	{
		ans1=8;
	}
	else
	{

				for( i=0;i<3;i++)
				{
					if(v[i]<=v[i+1])
					{
						
					}
					else
					break;	
				}

			

				ll j=0;
				for(j=4;j<7;j++)
				{
					if(v[j]<=v[j+1])
					{
					
					}
					else
					break;
				
				}
			
				if(i==3 || j==7)
				{
					ans1=4;
				}
				else
				{
					if(v[0]<=v[1] || v[2]<=v[3] || v[4]<=v[5] || v[6]<=v[7])
					{
						ans1=2;						
					}
					else
					ans1=1;
				}


	}

	ans2=ans1;
	
	for(ll i=8;i<16;i++)
	{
		v[i-8]=v[i];
	}	
	for(i=0;i<7;i++)
	{
		if(v[i]<=v[i+1])
		{
			
		}
		else
		break;
	}

	if(i==7)
	{
		ans1=8;
	}
	else
	{

				for( i=0;i<3;i++)
				{
					if(v[i]<=v[i+1])
					{
						
					}
					else
					break;	
				}

			

				ll j=0;
				for(j=4;j<7;j++)
				{
					if(v[j]<=v[j+1])
					{
					
					}
					else
					break;
				
				}
			
				if(i==3 || j==7)
				{
					ans1=4;
				}
				else
				{
					if(v[0]<=v[1] || v[2]<=v[3] || v[4]<=v[5] || v[6]<=v[7])
					{
						ans1=2;						
					}
					else
					ans1=1;
				}


	}

	if(ans1>ans2)
	cout<<ans1<<endl;
	else
	cout<<ans2<<endl;


	}
	

}

return 0;
} 
