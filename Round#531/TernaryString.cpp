#include<iostream>
using namespace std;
#define ll long long int

int main()
{

string s;
ll n;
cin>>n;
cin>>s;
ll count1=0;
ll count2=0;
ll count3=0;
for(ll i=0;i<n;i++)
{
	if(s[i]=='0')
	{
		count1++;
	}
	else if(s[i]=='1')
	{
		count2++;
	}
	else
	{
		count3++;
	}
}


ll k1=n/3-count1;
ll k2=n/3-count2;
ll k3=n/3-count3;

if(k1==0 && k2==0 && k3==0)
{
	cout<<s<<endl;
	return 0;
}

ll remi=0;
if(k1>0)
{
	
	for(ll i=0;i<n;i++)
	{
		if(k1==0)
		{
			remi=i;
			break;
		}
		if(s[i]=='1' && k2<0)
		{
			s[i]='0';
			k2++;
			k1--;
		}
		else if(s[i]=='2' && k3<0)
		{
			s[i]='0';
			k3++;
			k1--;
		}		
	}	
		


}

if(k2>0)
{
	ll countofzero=0;

		for(ll i=remi;i<n;i++)
	{
		if(k2==0)
		{
			break;
		}
		if(s[i]=='0')
		countofzero++;
		 if(s[i]=='2' && k3<0)
		{
			s[i]='1';
			k3++;
			k2--;
		}
		else if(s[i]=='0' && k1<0 && countofzero>(n/3))
		{
			s[i]='1';
			k1++;
			k2--;
		}
				
	}
}

if(k3>0)
{
	
		for(ll i=n-1;i>=0;i--)
		{
			if(k3==0)
			{
				break;
			}
			if(s[i]=='0' && k1<0)
			{
				s[i]='2';
				k1++;
				k3--;
			}
			else if(s[i]=='1' && k2<0)
			{
				s[i]='2';
				k2++;
				k3--;
			}		
		}

}
cout<<s<<endl;
return 0;
}
