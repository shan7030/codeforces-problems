#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{
ll n;
cin>>n;

vector<ll> v(n);

for(ll i=0;i<n;i++)
{
	cin>>v[i];
}

ll max=0;

ll count=0;
ll i=0;
ll j=n-1;
string ans="";

while(count<n)
{
	ll min1=v[i]<v[j]?v[i]:v[j];
	ll max1=v[i]>v[j]?v[i]:v[j];
	
	if(v[i]==v[j])
	{
		if(v[i]>=max)
		{
			ll start=i+1;
			ll maxc=v[i];
			ll count1=0;
			string s1="L";
			while(start<j)
			{
				if(v[start]>maxc)
				{
					maxc=v[start];
					s1=s1+"L";					
					count1++;
				}	
				else
				break;
				
				start++;
			}

			ll end=j-1;
			ll count2=0;
			 maxc=v[j];
			string s2="R";
			
			while(end>i)
			{
				if(v[end]>maxc)
				{		
					maxc=v[end];
					s2=s2+"R";
					count2++;		
				}		
				else
				break;			
				
				end--;
			}

	
			if(count1>count2)
			{
				ans=ans+s1;
			}
			else
			{
				ans=ans+s2;
			}
			break;
		}
		else
		{
			break;
		}		
	}
	
	if(min1>max)
	{
		if(min1==v[i])
		{
			ans=ans+'L';
		
			i++;
		}
		else
		{
			ans=ans+'R';
			j--;
		}
		max=min1;	
	}
	else if(max1>max)
	{
		if(max1==v[i])
		{
			ans=ans+'L';
		
			i++;
		}
		else
		{
			ans=ans+'R';
			j--;
		}
			max=max1;
	}
	else
	{
		break;
	}

	count++;

}
cout<<ans.length()<<endl;
cout<<ans<<endl;


return 0;
}
