#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

vector<ll> v(n);

ll sum=0;

ll count1=0;
ll count2=0;
for(ll i=0;i<n;i++)
{	
	cin>>v[i];
	sum=sum+v[i];

	if(v[i]==1)
	count1++;
	else
	count2++;
}

if(count1==0)
{
	while(count2--)
	{
		cout<<2<<" ";  
	}
}
else if(count2==0)
{
	while(count1--)
	{
		cout<<1<<" ";  
	}

}
else
{	
	//cout<<"HERE"<<endl;
	vector<ll> primes(sum+1,0);

	vector<ll> no;
	

	for(ll i=2;i<(sum+1);i++)
	{
		if(primes[i]==0)
		{
			no.push_back(i);
			//cout<<i<<" ";
			for(ll j=i*2;j<(sum+1);j=j+i)
			{
				primes[j]=1;	
			}

		}	
	
	}

	//cout<<endl;	
	vector<ll> diff;
	diff.push_back(2);
	
	for(ll i=1;i<no.size();i++)
	{
		diff.push_back(no[i]-no[i-1]);
		//cout<<diff[i]<<" "<<no[i]<<" "<<no[i-1]<<endl;
	}

	
	vector<ll> finans;

	for(ll i=0;i<diff.size();i++)
	{
		if(count1==0 || count2==0)
		break;

		if(diff[i]%2==1)
		{
			finans.push_back(1);
			count1--;

			
			if(count1==0 || count2==0)
				break;
			
			diff[i]--;

			while(diff[i])
			{
				
				if(count1==0 || count2==0)
				break;
			
				diff[i]=diff[i]-2;
				count2=count2-1;
				
				finans.push_back(2);
			}
		}
		else
		{
			if(count1==0 || count2==0)
				break;
			

			while(diff[i])
			{
				
				if(count1==0 || count2==0)
				break;
			
				diff[i]=diff[i]-2;
				count2=count2-1;
				
				finans.push_back(2);
			}

		}
	}

	while(count1--)
	{
		finans.push_back(1);
	}

	while(count2--)
	{
		finans.push_back(2);
	}

	for(ll i=0;i<finans.size();i++)
	{
		cout<<finans[i]<<" ";
	}		

}


return 0;
}
