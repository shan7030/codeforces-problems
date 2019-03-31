#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll n;
cin>>n;

while(n--)
{

	string s;
	cin>>s;

	ll flag=0;
	ll counter=0;
	
	vector<ll> v(26,0);
	counter=s.length();

	for(ll i=0;i<s.length();i++)
	{
		if(v[s[i]-'a']==0)
		{
			v[s[i]-'a']=1;	
			
		}	
		else
		{
			flag=1;
			break;
		}
	}

	//cout<<flag<<endl;
	
	for(ll i=0;i<26;i++)
	{
		if(v[i]==1)
		{
			while(counter && i<26)
			{
				if(v[i]==0)
				break;
				
				i++;
			
				counter--;	
			}		
			if(counter!=0)
			flag=1;

			break;		
		}
		
	}

//	cout<<flag<<endl;

	if(flag==1)
	cout<<"No"<<endl;
	else
	cout<<"Yes"<<endl;


}

return 0;
}
