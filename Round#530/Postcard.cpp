#include<iostream>
using namespace std;
#define ll long long int

int main()
{

string s;
cin>>s;
ll n;
cin>>n;

ll n1=s.length();
ll actual=0;
ll other1=0,other2=0;

string hh="";
for(ll i=0;i<n1;i++)
{
	if(i==0 && (s[i]=='?' || s[i]=='*'))
	continue;
	if(s[i]=='*')
	{
		hh=hh+s[i];
		while((s[i]=='*' || s[i]=='?') && i<n1)
		{
			i++;
		}	
		i--;
	}
	else if(s[i]=='?')
	{
			hh=hh+s[i];
		while((s[i]=='*' || s[i]=='?') && i<n1)
		{
			i++;
		}
		i--;
	}
	else
	{
		hh=hh+s[i];
	}
}

s=hh;
n1=s.length();
//cout<<s<<endl;
for(ll i=0;i<n1;i++)
{	
	if(s[i]=='?' && i!=0)
	{
		other1++;
	}
	else if(s[i]=='*' && i!=0)
	{
		other2++;
	}
	else if(s[i]!='*' && s[i]!='?')
	{
		actual++;
	}
}

if(other1==0 && other2==0)
{
	if(n!=n1)
	cout<<"Impossible"<<endl;
	else
	cout<<s<<endl;
	
}
else if(other1==0)
{	
	n1=n1-other2;
	
	if(n<(n1-other2))
	{
		cout<<"Impossible"<<endl;
		//cout<<"here"<<endl;
	}
	else
	{
		//cout<<"here"<<endl;
		
			ll diff=n1-n;
			if(diff>=0)
			{
				string ans="";	
				//cout<<n1<<endl;
				//cout<<n<<endl;				
				//cout<<diff<<endl;
				for(ll i=0;i<s.length();i++)	
				{
					if(s[i]=='*')
					continue;
					else if(diff>0 && (i+1)<s.length()  && s[i+1]=='*')
					{
						diff--;continue;
					}	
					
					ans=ans+s[i];
				}
				cout<<ans<<endl;	
			}
			else
			{
				string ans="";
				diff=n-n1;
				for(ll i=0;i<s.length();i++)
				{
					if(s[i]=='*' && diff>0)
					{	
						while(diff)
						{
							ans=ans+s[i-1];
							diff--;
						}
					}
					else if(s[i]=='*') 
					{
						continue;		
					}
					else
					{
						ans=ans+s[i];
					}
				}
				cout<<ans<<endl;
			}
				
	}

}
else if(other2==0)
{
	n1=n1-other1;
	
	if(n<(n1-other1))
	{
		cout<<"Impossible"<<endl;
		//cout<<"here"<<endl;
	}
	else
	{
		//cout<<"here"<<endl;
		
			ll diff=n1-n;
			if(diff>=0)
			{
				string ans="";	
				
				for(ll i=0;i<s.length();i++)	
				{
					if(s[i]=='?')
					continue;
					else if(diff>0 && (i+1)<s.length()  && s[i+1]=='?')
					{
						diff--;continue;
					}	
					
					ans=ans+s[i];
				}
				cout<<ans<<endl;	
			}
			else
			{
				cout<<"Impossible"<<endl;
			}
				
	}
}
else
{
	n1=n1-other1-other2;
	if(n<(n1-other1-other2))
	{
		cout<<"Impossible"<<endl;
	}
	else
	{
		ll diff=n1-n;
		if(diff>=0)
		{
			string ans="";	
				
				for(ll i=0;i<s.length();i++)	
				{
					if(s[i]=='?' || s[i]=='*')
					continue;
					else if(diff>0 && (i+1)<s.length()  && (s[i+1]=='?' ||s[i+1]=='*'))
					{
						diff--;continue;
					}	
					
					ans=ans+s[i];
				}
				cout<<ans<<endl;
		}
		else
		{
			string ans="";
				diff=n-n1;
				for(ll i=0;i<s.length();i++)
				{
					if(s[i]=='*' && diff>0)
					{	
						while(diff)
						{
							ans=ans+s[i-1];
							diff--;
						}
					}
					else if(s[i]=='*' || s[i]=='?') 
					{
						continue;		
					}
					else
					{
						ans=ans+s[i];
					}
				}
				cout<<ans<<endl;
		}

	}
}

return 0;
}
